/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.bth4;

import java.time.LocalDate;

/**
 *
 * @author admin
 */
public class Bai3 {

    public static void main(String[] args) {
        VacXin vx1 = new VacXin("Vacxin1", "USA");
        VacXin vx2 = new VacXin("Vacxin2", "Japan");
        QuanLyVacXin ql1 = new QuanLyVacXin();
        ql1.them(vx1, vx2);
        ql1.hienThiDs();
        
        CongDan cd1 = new CongDanNuocNgoai("12345", "Ho Chi Nguyen", LocalDate.of(2004,1,1), "789");
        QuanLyCongDan ql2 = new QuanLyCongDan();
        ql2.them(cd1);
        ql2.hienThiDanhSach();
        
        
    }
}
