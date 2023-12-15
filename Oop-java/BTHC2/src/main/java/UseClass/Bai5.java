/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;
import BuildClass.PhanSo;

/**
 *
 * @author admin
 */
public class Bai5 {
    public static void main(String[] args) {
        PhanSo ps1 = new PhanSo(2,3);
        PhanSo ps2 = new PhanSo(4,5);
        PhanSo ps3 = new PhanSo(-7,9);
        
        PhanSo[] a = {ps1, ps2, ps3};
        
        //xuat ds phan so trong mang
        for (var x: a)
            x.hienThi();
        
        //Tong ps
        PhanSo t = new PhanSo();
        for (var x: a) 
            t = t.congPs(x);
        System.out.printf("\nTong = ");
        t.rutGon().hienThi();
        
        //tim ps lon nhat trong mang
        PhanSo m = a[0];
        for (int i = 1;i<a.length;i++) 
            if (a[i].soSanh(m) > 0)
                m = a[i];
        System.out.printf("\nMAX = ");
        m.hienThi();
    }
}
