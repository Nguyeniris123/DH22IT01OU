/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author admin
 */
public class QuanLiHocVien {
    private List <HocVien> ds = new ArrayList<>();
    
    public void themHv (HocVien... a) {
        this.getDs().addAll(Arrays.asList(a));
    }
    
    public void themHv() {
        HocVien h = new HocVien();
        h.nhap1Hv();
        this.getDs().add(h);
    }
    
    public void docDsHv() throws FileNotFoundException {
        File f = new File ("src/main/resources/hv.txt");
        try (Scanner sc = new Scanner(f)) {
            while (sc.hasNext())
                this.ds.add(new HocVien(sc.nextLine(),sc.nextLine()));
        }
    }
    
    public void nhapDiemDs() {
        this.ds.forEach(h->
        {
            System.out.printf("== Nhap cho %s\n", h.getTenHv().toUpperCase());
            h.nhapDiem1Hv();
        });
    }
    
    public void hienThiDs() {
        this.ds.forEach(h -> h.hienThi());
    }

    /**
     * @return the ds
     */
    public List <HocVien> getDs() {
        return ds;
    }

    /**
     * @param ds the ds to set
     */
    public void setDs(List <HocVien> ds) {
        this.ds = ds;
    }
    
    
}
