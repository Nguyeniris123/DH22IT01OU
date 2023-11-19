/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.Diem;
import BuildClass.HinhChuNhat;
/**
 *
 * @author NGUYEN
 */
public class Bai3 {
    public static void main(String[] args) throws Exception {
        HinhChuNhat hcn1 = new HinhChuNhat(new Diem (2,5), new Diem (7,1));
        hcn1.hienThi();
    }
}
