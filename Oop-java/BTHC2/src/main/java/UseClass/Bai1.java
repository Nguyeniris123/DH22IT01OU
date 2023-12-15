/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.Diem;

/**
 *
 * @author NGUYEN
 */
public class Bai1 {
    public static void main(String[] args) {
        //khai bao doi tuong
        Diem A = new Diem(1,2);
        Diem B = new Diem(3,4);
        
        //hien thi
        A.hienThi();
        B.hienThi();
        System.out.println("Khoang cach giua 2 diem A va B: " + A.khoangCach(B));
    }
}

