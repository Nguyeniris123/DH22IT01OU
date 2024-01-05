/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.bthc4;

/**
 *
 * @author admin
 */
public class Bai1 {

    public static void main(String[] args) throws ClassNotFoundException {
        Hinh h1 = new HinhChuNhat("Hinh Chu Nhat", 5,4);
        Hinh h2 = new TamGiac("tam Giac", 2, 3, 4);
        Hinh h3 = new HinhVuong("Hinh Vuong", 10);
        Hinh h4 = new HinhVuong("Hinh Vuong", 20);
        QlHinh ds = new QlHinh();
        ds.themHinh(h1,h2, h3, h4);
//        ds.xoaHinh("tam Giac");
        ds.hienThiDs();
        ds.sapxepDs();
        ds.hienThiDs();
        ds.sapxepHinh();
        ds.hienThiDs();
        System.out.println("===");
        ds.timTheoLoai("com.mycompany.bthc4.HinhChuNhat").forEach(t -> System.out.println(t));
        System.out.println(ds.timHinh(new HinhVuong("Hinh Vuong", 20)));
    }
}
