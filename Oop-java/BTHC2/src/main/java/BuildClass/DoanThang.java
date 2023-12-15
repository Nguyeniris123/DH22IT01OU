/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;
/**
 *
 * @author NGUYEN
 */
public class DoanThang {
    //thuoc tinh
    private Diem diem1;
    private Diem diem2;
    
    //ham khoi tao ko tham so
    public DoanThang(Diem diem1, Diem diem2) {
        this.diem1 = diem1;
        this.diem2 = diem2;
    }
    
    //cac ham getter    
    public Diem getDiem1() {
        return diem1;
    }
    
    public Diem getDiem2() {
        return diem2;
    }
    
    //cac ham setter 
    public void setDiem1(Diem diem1) {
        this.diem1 = diem1;
    }
    
    public void setDiem2(Diem diem2) {
        this.diem2 = diem2;
    }
    
    //hien thi info 
    public void hienThi() {
        System.out.printf("[(%.1f, %.1f);(%.1f, %.1f)]",
                this.diem1.getHoanhDo(), this.diem1.getTungDo(), this.diem2.getHoanhDo(), this.diem2.getTungDo());
        System.out.println();
    }
    
    public double tinhDoDai() {
        return this.diem1.khoangCach(this.diem2);
    }
    
    public Diem timTrungDiem() {
        double x = (this.diem1.getHoanhDo() + this.diem2.getHoanhDo())/2;
        double y = (this.diem1.getTungDo() + this.diem2.getTungDo())/2;
        return new Diem (x,y);
    }
    
    public boolean isSongSong (DoanThang dt) {
        double v1 = (this.diem1.getHoanhDo() - this.diem2.getHoanhDo())*(dt.diem1.getTungDo() - dt.diem2.getTungDo());
        double v2 = (this.diem1.getTungDo() - this.diem2.getTungDo())*(dt.diem1.getHoanhDo() - dt.diem2.getHoanhDo());
        return (v1 == v2); 
    }
}
