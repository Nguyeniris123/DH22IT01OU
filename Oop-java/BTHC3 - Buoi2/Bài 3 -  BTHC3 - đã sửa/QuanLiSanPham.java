/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author admin
 */
public class QuanLiSanPham {
    private List<SanPham> sp = new ArrayList<>();
    
    public void hienThi() {
        this.getSp().forEach(h -> h.hienThi());
    }
    
    public void themSp(SanPham... a) {
        this.getSp().addAll(Arrays.asList(a));
    }
    
//    public void themSp(int x) {
//        if (x==1) {
//            SanPham sp1 = new Sach();
//            sp1.nhap1Sp();
//            this.getSp().add(sp1);
//        } else {
//            SanPham sp2 = new Sach();
//            sp2.nhap1Sp();
//            this.getSp().add(sp2);
//        }
//    }
    
    public void themSp(String classPath) 
            throws ClassNotFoundException, 
            NoSuchMethodException, InstantiationException, IllegalAccessException, 
            IllegalArgumentException, InvocationTargetException {
        Class c = Class.forName(classPath);
        SanPham s = (SanPham) c.getConstructor().newInstance();
        s.nhap1Sp();
        this.sp.add(s);
    }
    
    public void sapXep() {
        this.sp.sort((h1,h2) -> -h1.soSanh(h2));
    }

    public SanPham timKiem(int ma) {
        return this.sp.stream().filter(h -> h.getId() == ma).findFirst().get();
    }
    
    public void xoaSp(int ma) {
        this.sp.removeIf(h -> h.getId() == ma);
    }
    
    /**
     * @return the sp
     */
    public List<SanPham> getSp() {
        return sp;
    }

    /**
     * @param sp the sp to set
     */
    public void setSp(List<SanPham> sp) {
        this.sp = sp;
    }
           
}
