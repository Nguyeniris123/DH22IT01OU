/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.Diem;
import BuildClass.DoanThang;
/**
 *
 * @author NGUYEN
 */
public class Bai2 {
    public static void main(String[] args) {
        //khai bao doi tuong
        Diem A = new Diem(1,2);
        Diem B = new Diem(3,4);
        Diem C = new Diem(5,6);
        Diem D = new Diem(3,5);
        DoanThang dt1 = new DoanThang(A,B); 
        DoanThang dt2 = new DoanThang(C,D); 
        //hien thi
        dt1.hienThi();
        
        //tinh do dai doan thang
        System.out.printf("Do dai doan thang: %.2f", dt1.tinhDoDai());
        System.out.println();
        
        //tim trung diem doan thang
        Diem trungDiem = dt1.timTrungDiem();
        System.out.print("Trung diem doan thang: ");
        trungDiem.hienThi();
        
        //kiem tra 2 dt song song
//        System.out.printf("%b", dt1.isSongSong(dt2));
        if (dt1.isSongSong(dt2)) {
            System.out.println("2 doan thang song song nhau");
        } else {
            System.out.println("2 doan thang ko song song nhau");
        }
    }
}
