/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author admin
 */
public class DsPhanSo {

    private List<PhanSo> ds = new ArrayList<>();

    public void themPs(PhanSo... a) {
        this.getDs().addAll(Arrays.asList(a));
    }

    public void themPs() {
        PhanSo p = new PhanSo();
        p.nhapPs();
        this.getDs().add(p);
    }
    
    public void xoaPs(PhanSo p) {
        this.ds.removeIf(q->q.soSanh(p) == 0);
    } 
    
    public void xoaPs (int t, int m) {
        this.xoaPs(new PhanSo(t,m));
    }

    public void hienThi() {
        this.getDs().forEach(p -> p.hienThi());
    }

    public PhanSo timMax() {
        return this.getDs().stream().max((a, b) -> a.soSanh(b)).get();
    }

    public PhanSo timMin() {
        return this.getDs().stream().min((a, b) -> a.soSanh(b)).get();
    }

    public void sapXep() {
        this.getDs().sort((a, b) -> a.soSanh(b));
    }
    
    public void sapXepNguoc() {
        this.getDs().sort((a, b) -> -a.soSanh(b));
    }
    
    public PhanSo tong() {
        return this.ds.stream().reduce(new PhanSo(), (t,x) ->t.congPs(x));
    }
    
//    PhanSo t = new PhanSo();
//        for (var x: a) 
//            t = t.congPs(x);
//        System.out.printf("\n Tong = ");
//        t.rutGon().hienThi();
//    
    
    //get set
    public List<PhanSo> getDs() {
        return ds;
    }

    public void setDs(List<PhanSo> ds) {
        this.ds = ds;
    }
}
