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
public class SanPham {
    private static int dem;
    private int maSanPham;
    private String tenSanPham;
    private String moTaSanPham;
    private String nhaSanXuat;
    private int giaBan;

    public SanPham(int maSanPham, String tenSanPham, String moTaSanPham, String nhaSanXuat, int giaBan) {
        this.maSanPham = maSanPham;
        this.tenSanPham = tenSanPham;
        this.moTaSanPham = moTaSanPham;
        this.nhaSanXuat = nhaSanXuat;
        this.giaBan = giaBan;
    }
    
    public SanPham() {
        
    }

    public void nhap1Sp() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Ma Sp:  ");
        this.maSanPham = sc.nextByte();
        sc.nextLine();
        
        System.out.print("Ten Sp: ");
        this.tenSanPham = sc.nextLine();
        
        System.out.print("Mo ta: ");
        this.moTaSanPham = sc.nextLine();
        
        System.out.print("Nha san xuat: ");
        this.nhaSanXuat = sc.nextLine();
        
        System.out.print("Gia ban: ");
        this.giaBan = sc.nextByte();
        
    }
    
    public int soSanh(SanPham sp) {
        int sp1 = this.giaBan;
        int sp2 = sp.giaBan;
        if (sp1 > sp2) {
            return 1;
        } else if (sp1 < sp2) {
            return -1;
        }
        return 0;
    }
    
    public void hienThi() {
        System.out.printf("Ma: %d\nTen: %s\nMo ta: %s\nNha san xuat: %s\nGia: %d\n",
                this.maSanPham, this.tenSanPham, this.moTaSanPham, this.nhaSanXuat, this.giaBan);
    }
    
    /**
     * @return the dem
     */
    public static int getDem() {
        return dem;
    }

    /**
     * @param aDem the dem to set
     */
    public static void setDem(int aDem) {
        dem = aDem;
    }

    /**
     * @return the maSanPham
     */
    public int getMaSanPham() {
        return maSanPham;
    }

    /**
     * @param maSanPham the maSanPham to set
     */
    public void setMaSanPham(int maSanPham) {
        this.maSanPham = maSanPham;
    }

    /**
     * @return the tenSanPham
     */
    public String getTenSanPham() {
        return tenSanPham;
    }

    /**
     * @param tenSanPham the tenSanPham to set
     */
    public void setTenSanPham(String tenSanPham) {
        this.tenSanPham = tenSanPham;
    }

    /**
     * @return the moTaSanPham
     */
    public String getMoTaSanPham() {
        return moTaSanPham;
    }

    /**
     * @param moTaSanPham the moTaSanPham to set
     */
    public void setMoTaSanPham(String moTaSanPham) {
        this.moTaSanPham = moTaSanPham;
    }

    /**
     * @return the nhaSanXuat
     */
    public String getNhaSanXuat() {
        return nhaSanXuat;
    }

    /**
     * @param nhaSanXuat the nhaSanXuat to set
     */
    public void setNhaSanXuat(String nhaSanXuat) {
        this.nhaSanXuat = nhaSanXuat;
    }

    /**
     * @return the giaBan
     */
    public int getGiaBan() {
        return giaBan;
    }

    /**
     * @param giaBan the giaBan to set
     */
    public void setGiaBan(int giaBan) {
        this.giaBan = giaBan;
    }
    
    
}
