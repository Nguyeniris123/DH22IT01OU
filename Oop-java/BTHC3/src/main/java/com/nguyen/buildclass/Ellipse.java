/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.buildclass;

/**
 *
 * @author admin
 */
public class Ellipse extends Hinh {
    private double bkTrucLon;
    private double bkTrucBe;

    public Ellipse(double bkTrucLon, double bkTrucBe) {
        this.bkTrucLon = bkTrucLon;
        this.bkTrucBe = bkTrucBe;
    }

    public double tinhDienTich() {
        return Math.PI*this.bkTrucLon*this.bkTrucBe;
    }
    
    public double tinhChuVi() {
        return 2*Math.PI*Math.sqrt((Math.pow(this.bkTrucLon, 2)+Math.pow(this.bkTrucBe, 2))/2);
    }
    
    public String layTenHinh() {
        return "Hinh Ellipse";
    }
    
    public void hienThi() {
        System.out.printf("%s\nDien tich: %.1f\nChu vi: %.1f\n", this.layTenHinh(), this.tinhDienTich(), this.tinhChuVi());
    }
    /**
     * @return the bkTrucLon
     */
    public double getBkTrucLon() {
        return bkTrucLon;
    }

    /**
     * @param bkTrucLon the bkTrucLon to set
     */
    public void setBkTrucLon(double bkTrucLon) {
        this.bkTrucLon = bkTrucLon;
    }

    /**
     * @return the bkTrucBe
     */
    public double getBkTrucBe() {
        return bkTrucBe;
    }

    /**
     * @param bkTrucBe the bkTrucBe to set
     */
    public void setBkTrucBe(double bkTrucBe) {
        this.bkTrucBe = bkTrucBe;
    }
    
}
