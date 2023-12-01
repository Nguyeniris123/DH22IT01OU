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
import java.util.stream.Collectors;

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
    
    //id la ma hoc vien
    public HocVien timKiem (int id) {
       return this.ds.stream().filter(h -> h.getMaHv()== id).findFirst().get();
    }
   
    public List<HocVien> timKiem(String kw) {
        return this.ds.stream().filter(h -> h.getTenHv().contains(kw) == true).collect(Collectors.toList());
    }

    public void sapxep() {
        this.ds.sort((h1, h2) -> -h1.soSanh(h2));
    }
   
    public List<HocVien> timKiemHb () {
       return this.ds.stream().filter(h -> h.isHocBong()).collect(Collectors.toList());
    }
    
    public void thongKeTuoiDs() {
        int duoi18 = 0, giua = 0, tren23 = 0;
        for (HocVien x : ds) {
            int kq = x.thongKeTuoi();
            if (kq == -1) {
                duoi18++;
            } else if (kq == 0) {
                giua++;
            } else {
                tren23++;
            }

        }
        System.out.printf("hoc vien co do tuoi nho hon 18: %d\n"
                + "hoc vien co do tuoi tu 18 - 23: %d\n"
                + "hoc vien co do tuoi tu 24 tro len: %d\n", duoi18, giua, tren23);
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
