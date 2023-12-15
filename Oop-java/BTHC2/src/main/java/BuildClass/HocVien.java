/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.stream.DoubleStream;

/**
 *
 * @author admin
 */
public class HocVien {
    private static int dem = 0;
    private int maHv = ++dem;
    private String tenHv;
    private LocalDate ngaySinh;
    private double[] diem;

    public HocVien(String tenHv, LocalDate ngaySinh) {
        this.tenHv = tenHv;
        this.ngaySinh = ngaySinh;
    }

    public HocVien(String tenHv, String ngaySinh) {
        this(tenHv, LocalDate.parse(ngaySinh, DateTimeFormatter.ofPattern(CauHinh.DATE_FORMAT)));
    }
    
    public HocVien() {
        
    }

    public void hienThi() {
        System.out.printf("%d - %s - %s\n",this.maHv, this.tenHv,
                this.ngaySinh.format(DateTimeFormatter.ofPattern(CauHinh.DATE_FORMAT)));
        if (this.diem != null) {
            int i = 1;
            for (double x : this.diem) {
                System.out.printf("Mon %d: %.1f\t", i, x);
                i++;
            }
        }
        System.out.printf("\nDiem trung binh: %.2f\n\n", this.tinhTrungBinh());
    }
    
    public double tinhTrungBinh() {
        return DoubleStream.of(this.diem).average().getAsDouble();
    }

    //Phuong thuc so sanh de sap xep
    public int soSanh(HocVien p) {
        double t1 = this.tinhTrungBinh();
        double t2 = p.tinhTrungBinh();
        if (t1 > t2) {
            return 1;
        } else if (t1 < t2) {
            return -1;
        }
        return 0;
    }
    
    //Phuong thuc xac dinh hs dat hoc bong
    public boolean isHocBong() {
        for (double x : this.diem) {
            if (x < 5) {
                return false;
            }
        }
        return this.tinhTrungBinh() >= 8;
    }
    
    public void nhap1Hv() {
        System.out.print("Ho ten = ");
        this.tenHv = CauHinh.SC.nextLine();
        System.out.print("Ngay sinh (dd/MM/yyyy) = ");
        this.ngaySinh = LocalDate.parse(CauHinh.SC.nextLine(),DateTimeFormatter.ofPattern(CauHinh.DATE_FORMAT));
    }
    
    public void nhapDiem1Hv() {
        this.diem = new double[CauHinh.SO_MON];
        for (int i = 0; i < CauHinh.SO_MON; i++) {
            System.out.printf("Diem Mon thu %d: ", i + 1);
            this.diem[i] = Double.parseDouble(CauHinh.SC.nextLine());
        }
    }
    
    // thong ke tuoi < 18, 18 - 23, >= 24
    public int thongKeTuoi() {
       if (this.ngaySinh.plusYears(18).compareTo(LocalDate.now()) > 0) 
    return -1; // nho hon 18
        if (this.ngaySinh.plusYears(23).compareTo(LocalDate.now()) > 0) 
    return 0; // tu 18 den 23 
        return 1; //lon hon bang 24
    }

    /**
     * @return the dem
     */
    public static int getDem() {
        return dem;
    }

    /**
     * @param aDem the dem to set
     */
    public static void setDem(int aDem) {
        dem = aDem;
    }

    /**
     * @return the maHv
     */
    public int getMaHv() {
        return maHv;
    }

    /**
     * @param maHv the maHv to set
     */
    public void setMaHv(int maHv) {
        this.maHv = maHv;
    }

    /**
     * @return the tenHv
     */
    public String getTenHv() {
        return tenHv;
    }

    /**
     * @param tenHv the tenHv to set
     */
    public void setTenHv(String tenHv) {
        this.tenHv = tenHv;
    }

    /**
     * @return the ngaySinh
     */
    public LocalDate getNgaySinh() {
        return ngaySinh;
    }

    /**
     * @param ngaySinh the ngaySinh to set
     */
    public void setNgaySinh(LocalDate ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    /**
     * @return the diem
     */
    public double[] getDiem() {
        return diem;
    }

    /**
     * @param diem
     */
    public void setDiem(double[] diem) {
        this.diem = diem;
    }
}