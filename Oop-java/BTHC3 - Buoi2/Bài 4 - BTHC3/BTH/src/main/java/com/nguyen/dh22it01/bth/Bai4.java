/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.dh22it01.bth;

/**
 *
 * @author admin
 */
public class Bai4 {

    public static void main(String[] args) {
        KoKyHan tk1 = new KoKyHan("Ho Chi Nguyen", 500);
        KoKyHan tk2 = new CoKyHan("Bui Trong Tin", 1000, KyHan.MOT_TUAN);
        KoKyHan tk3 = new CoKyHan("nguyen Van A", 2500, KyHan.MOT_THANG);

        tk1.hienThi();
        tk2.hienThi();
        tk3.hienThi();
        tk1.nopTien(1000);
        tk1.rutTien(100);
        tk1.hienThi();
        tk2.nopTien(500);
        tk3.rutTien(3000);
        tk2.hienThi();
        tk3.hienThi();
    }
}
