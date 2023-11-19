/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author NGUYEN
 */
public class HinhTron {
    private Diem tam;
    private double banKinh;

    public HinhTron(Diem tam, double banKinh) {
        this.tam = tam;
        this.banKinh = banKinh;
    }
    
    public void chuViDienTich() {
        final double PI = 3.1415926535897;
        double cv = (this.getBanKinh()*2)*PI;
        double dt = (Math.pow(this.getBanKinh(), 2))*PI;
        System.out.printf("Chu vi: %.1f", cv);
        System.out.println();
        System.out.printf("Dien tich: %.1f", dt);
        System.out.println();
    }

    public int xacDinhTuongDoiDiem (Diem d) {
        double kc = this.tam.khoangCach(d);
        if (kc >this.banKinh) 
            return 1;
        else if (kc < this.banKinh)
            return -1;
        return 0;
    }
    
    public int xacDinhTuongDoiDuongTron(HinhTron dt) {
        double kc = this.tam.khoangCach(dt.tam);
        if (kc > this.banKinh + dt.banKinh)
            return 1;
        else if (kc < this.banKinh + dt.banKinh)
            return -1;
        return 0;
    }
    
    /**
     * @return the tam
     */
    public Diem getTam() {
        return tam;
    }

    /**
     * @param tam the tam to set
     */
    public void setTam(Diem tam) {
        this.tam = tam;
    }

    /**
     * @return the banKinh
     */
    public double getBanKinh() {
        return banKinh;
    }

    /**
     * @param banKinh the banKinh to set
     */
    public void setBanKinh(double banKinh) {
        this.banKinh = banKinh;
    }
    
}
