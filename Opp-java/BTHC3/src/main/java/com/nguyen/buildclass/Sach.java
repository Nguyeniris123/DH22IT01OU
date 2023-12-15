/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.buildclass;

import java.util.Scanner;

/**
 *
 * @author NGUYEN
 */
public class Sach extends SanPham {
    private int soTrang;
    public Sach(int maSanPham, String tenSanPham, String moTaSanPham, String nhaSanXuat, int giaBan, int soTrang) {
        super(maSanPham, tenSanPham, moTaSanPham, nhaSanXuat, giaBan);
        this.soTrang = soTrang;
    }
    
    public Sach() {
        
    }
    
    @Override
    public void nhap1Sp() {
        Scanner sc = new Scanner(System.in);
        super.nhap1Sp();
        System.out.print("So trang: ");
        this.soTrang = sc.nextByte();
     
    }
    
    @Override
    public void hienThi() {
        super.hienThi();
        System.out.printf("So trang: %d\n", this.soTrang);
    }
}
