/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

/**
 *
 * @author NGUYEN
 */
public class Diem {
    //thuoc tinh
    private double hoanhDo;
    private double tungDo;
    
    //phuong thuc
    //ham khoi tao ko tham so
    public Diem(double hoanhDo, double tungDo) {
        this.hoanhDo = hoanhDo;
        this.tungDo = tungDo;
    }
    
    //tinh khoang cach
    public double khoangCach (Diem d2) {
        return Math.sqrt((this.hoanhDo-d2.hoanhDo)*(this.hoanhDo-d2.hoanhDo) 
                + (this.tungDo-d2.tungDo)*(this.tungDo-d2.tungDo));
    }
    
    //hien thi info 
    public void hienThi() {
        System.out.printf("(%.1f;%.1f)", this.hoanhDo, this.tungDo);
        System.out.println();
    }
    
    //cac ham getter
    public double getHoanhDo() {
        return hoanhDo;
    }
    
    public double getTungDo() {
        return tungDo;
    }
    
    //cac ham setter 
    public void setHoanhDo (double hoanhDo) {
        this.hoanhDo = hoanhDo;
    }
    
    public void setTungDo (double tungDo) {
        this.tungDo = tungDo;
    }
}
