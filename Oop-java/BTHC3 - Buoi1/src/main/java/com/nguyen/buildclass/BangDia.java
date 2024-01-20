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
public class BangDia extends SanPham {
    private int doDai; 
    public BangDia(int maSanPham, String tenSanPham, String moTaSanPham, String nhaSanXuat, int giaBan, int doDai) {
        super(maSanPham, tenSanPham, moTaSanPham, nhaSanXuat, giaBan);
        this.doDai = doDai;
    }
    
    public BangDia() {
        
    }
    
    @Override
    public void nhap1Sp() {
        Scanner sc = new Scanner(System.in);
        super.nhap1Sp();
        System.out.print("Do dai: ");
        this.doDai = sc.nextByte();
     
    }
    
    @Override
    public void hienThi() {
        super.hienThi();
        System.out.printf("Do dai: %d\n", this.doDai);
    }
}
