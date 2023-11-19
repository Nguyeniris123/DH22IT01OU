/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package UseClass;

import BuildClass.PhanSo;
import BuildClass.DsPhanSo;

/**
 *
 * @author admin
 */
public class Bai6 {

    public static void main(String[] args) {
        DsPhanSo ql = new DsPhanSo();
        PhanSo ps1 = new PhanSo(2, 3);
        PhanSo ps2 = new PhanSo(4, 5);
        PhanSo ps3 = new PhanSo(-7, 9);
        PhanSo ps4 = new PhanSo(2, 9);
        PhanSo ps5 = new PhanSo(-5, 3);

        ql.themPs(ps1, ps2, ps3, ps4, ps5);
//        ds.themPs();
//        ds.themPs();
        ql.hienThi();

        System.out.print("Gia tri Max = ");
        ql.timMax().hienThi();

        System.out.print("Gia tri Min = ");
        ql.timMin().hienThi();

        System.out.println("Ds sau khi sap xep ");
        ql.sapXep();
        ql.hienThi();
        
        System.out.println("Ds sau khi sap xep nguoc");        
        ql.sapXepNguoc();
        ql.hienThi();
        
        System.out.print("Tong ps trong ds: ");        
        ql.tong().rutGon().hienThi();

        System.out.println("Xoa ps1");
        ql.xoaPs(ps1);
        ql.hienThi();
        
        System.out.println("Xoa ps 4/5");
        ql.xoaPs(4, 5);
        ql.hienThi();
    }
}
