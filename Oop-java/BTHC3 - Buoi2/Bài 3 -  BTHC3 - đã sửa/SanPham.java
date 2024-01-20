/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author admin
 */
public class SanPham {
    private static int dem;
    private int id = ++dem;
    private String tenSanPham;
    private double giaSanPham;

    public SanPham(String tenSanPham, double giaSanPham) {
        this.tenSanPham = tenSanPham;
        this.giaSanPham = giaSanPham;
    }
    
    public SanPham() {
        
    }
    
    public void nhap1Sp() {
        System.out.print("Ten = ");
        this.tenSanPham = CauHinh.SC.nextLine();
        System.out.print("Gia = ");
        this.giaSanPham = Double.parseDouble(CauHinh.SC.nextLine());
    }
    
    public int soSanh(SanPham sp) {
        double sp1 = this.giaSanPham;
        double sp2 = sp.giaSanPham;
        if (sp1 > sp2) 
            return 1;
        else if (sp1<sp2)
            return -1;
        else return 0;
    }

    public void hienThi() {
        System.out.printf("Ma: %d - Ten: %s - Gia: %f\n", 
                this.id, this.tenSanPham, this.giaSanPham);
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
     * @return the id
     */
    public int getId() {
        return id;
    }

    /**
     * @param id the id to set
     */
    public void setId(int id) {
        this.id = id;
    }

    /**
     * @return the tenSanPham
     */
    public String getTenSanPham() {
        return tenSanPham;
    }

    /**
     * @param tenSanPham the tenSanPham to set
     */
    public void setTenSanPham(String tenSanPham) {
        this.tenSanPham = tenSanPham;
    }

    /**
     * @return the giaSanPham
     */
    public double getGiaSanPham() {
        return giaSanPham;
    }

    /**
     * @param giaSanPham the giaSanPham to set
     */
    public void setGiaSanPham(double giaSanPham) {
        this.giaSanPham = giaSanPham;
    }
    
}
