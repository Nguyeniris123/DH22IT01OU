/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bthc4;

/**
 *
 * @author admin
 */
public class HinhChuNhat extends Hinh {
    private double chieuDai;
    private double chieuRong;

    public HinhChuNhat(String ten, double chieuDai, double chieuRong) {
        super(ten);
        this.chieuDai = chieuDai;
        this.chieuRong = chieuRong;
    }

    @Override
    public double tinhDienTich() {
        return this.chieuDai*this.chieuRong;
    }

    @Override
    public double tinhChuVi() {
        return (this.chieuDai+this.chieuRong)*2;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof HinhChuNhat) {
            HinhChuNhat h1 = (HinhChuNhat) obj;
            return super.equals(obj) && this.chieuDai == h1.chieuDai && this.chieuRong == h1.chieuRong;
        }
        return false;
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
