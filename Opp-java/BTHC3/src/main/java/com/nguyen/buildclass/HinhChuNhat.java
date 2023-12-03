/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.buildclass;

/**
 *
 * @author admin
 */
public class HinhChuNhat extends Hinh {
    private double chieuDai;
    private double chieuRong;

    public HinhChuNhat(double chieuDai, double chieuRong) {
        this.chieuDai = chieuDai;
        this.chieuRong = chieuRong;
    }
    
    public double tinhDienTich() {
        return this.chieuDai*this.chieuRong;
    }
    
    public double tinhChuVi() {
        return 2*(this.chieuDai+this.chieuRong);
    }
    
    public String layTenHinh() {
        return "Hinh Chu Nhat";
    }
    
    public void hienThi() {
        System.out.printf("%s\nDien Tich: %.1f\nChu Vi: %.1f\n", this.layTenHinh(), this.tinhDienTich(), this.tinhChuVi());
    }
    /**
     * @return the chieuDai
     */
    public double getChieuDai() {
        return chieuDai;
    }

    /**
     * @param chieuDai the chieuDai to set
     */
    public void setChieuDai(double chieuDai) {
        this.chieuDai = chieuDai;
    }

    /**
     * @return the chieuRong
     */
    public double getChieuRong() {
        return chieuRong;
    }

    /**
     * @param chieuRong the chieuRong to set
     */
    public void setChieuRong(double chieuRong) {
        this.chieuRong = chieuRong;
    }
    
}
