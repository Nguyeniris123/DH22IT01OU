/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.Diem;
import BuildClass.HinhTron;
/**
 *
 * @author NGUYEN
 */
public class Bai4 {
    public static void main (String[] args) {
        HinhTron ht1 = new HinhTron(new Diem(1,1),1);
        HinhTron ht2 = new HinhTron(new Diem(5,1),1);
        
        ht1.chuViDienTich();
        
        System.out.printf("Vi tri tuong doi cua diem voi hinh tron: %d",
                ht1.xacDinhTuongDoiDiem(new Diem (2,2)));
        System.out.println();
        
        System.out.printf("Vi tri tuong doi cua hinh tron voi hinh tron: %d",
                ht1.xacDinhTuongDoiDuongTron(ht2));
        System.out.println();
    }
}
