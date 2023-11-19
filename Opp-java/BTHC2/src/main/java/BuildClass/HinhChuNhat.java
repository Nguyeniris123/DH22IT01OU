/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author NGUYEN
 */
public class HinhChuNhat {
    private Diem trenTrai;
    private Diem duoiPhai;

    public HinhChuNhat(Diem trenTrai, Diem duoiPhai) throws Exception {
        if (duoiPhai.getHoanhDo() > trenTrai.getHoanhDo() && trenTrai.getTungDo() > duoiPhai.getTungDo()) {
            this.trenTrai = trenTrai;
            this.duoiPhai = duoiPhai;
        } else 
            throw new Exception("Invalid input");
    }
    
    //chu vi hinh chu nhat 
    public double chuVi() {
        return Math.abs((this.duoiPhai.getHoanhDo()-this.trenTrai.getHoanhDo())+(this.duoiPhai.getTungDo()-this.trenTrai.getTungDo()))/2;
    }
    
    public double dienTich() {
        return Math.abs((this.duoiPhai.getHoanhDo()-this.trenTrai.getHoanhDo())*(this.duoiPhai.getTungDo()-this.trenTrai.getTungDo()));
    }
    
    //Hien thi
    public void hienThi() {
        System.out.printf("[(%.1f, %.1f);(%.1f, %.1f)]",
                this.trenTrai.getHoanhDo(), this.trenTrai.getTungDo(), this.duoiPhai.getHoanhDo(), this.duoiPhai.getTungDo());
        System.out.println();
        System.out.printf("Chu vi: %.1f", this.chuVi());
        System.out.println();
        System.out.printf("Dien tich: %.1f", this.dienTich());
        System.out.println();
    }
    
    /**
     * @return the trenTrai
     */
    public Diem getTrenTrai() {
        return trenTrai;
    }

    /**
     * @param trenTrai the trenTrai to set
     */
    public void setTrenTrai(Diem trenTrai) {
        this.trenTrai = trenTrai;
    }

    /**
     * @return the duoiPhai
     */
    public Diem getDuoiPhai() {
        return duoiPhai;
    }

    /**
     * @param duoiPhai the duoiPhai to set
     */
    public void setDuoiPhai(Diem duoiPhai) {
        this.duoiPhai = duoiPhai;
    }
    
}
