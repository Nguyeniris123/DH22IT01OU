/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

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
        if (this.diem!= null) {
            for (double x: this.diem)
                System.out.printf("%.1f\t", x);
        }
    }
    
    public void nhap1Hv() {
        System.out.print("Ho ten = ");
        this.tenHv = CauHinh.SC.nextLine();
        System.out.print("Ngay sinh (dd/MM/yyyy) = ");
        this.ngaySinh = LocalDate.parse(CauHinh.SC.nextLine(),DateTimeFormatter.ofPattern(CauHinh.DATE_FORMAT));
    }
    
    public void nhapDiem1Hv() {
        this.diem = new double[CauHinh.SO_MON];
        for (int i = 0;i<CauHinh.SO_MON;i++)
            
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