/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.dh22it01.bth;

/**
 *
 * @author admin
 */
public class KoKyHan {
    private static int dem;
    private String stk;
    private String tenTk;
    protected double soTien;

    {
        stk = String.format("%06d", ++dem);
    }
    
    public KoKyHan(String tenTk, double soTien) {
        this.tenTk = tenTk;
        this.soTien = soTien;
    }
    
    public double tienLai() {
        return (this.soTien*0.001)/12;
    }
    
    public boolean isDaoHan() {
        return true;
    }
    
    public void nopTien(double st) {
        if (this.isDaoHan()) 
            this.soTien+= st;
    }
    
    public void rutTien(double st) {
        if (this.isDaoHan() && this.soTien >= st) 
            this.soTien -= st;
    }

    public void hienThi() {
        System.out.printf("STK: %s\nTen TK: %s\nSo Tien: %.0f\nTien lai: %.5f\n", this.stk, this.tenTk, this.soTien, this.tienLai());
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
     * @return the stk
     */
    public String getStk() {
        return stk;
    }

    /**
     * @param stk the stk to set
     */
    public void setStk(String stk) {
        this.stk = stk;
    }

    /**
     * @return the tenTk
     */
    public String getTenTk() {
        return tenTk;
    }

    /**
     * @param tenTk the tenTk to set
     */
    public void setTenTk(String tenTk) {
        this.tenTk = tenTk;
    }

    /**
     * @return the soTien
     */
    public double getSoTien() {
        return soTien;
    }

    /**
     * @param soTien the soTien to set
     */
    public void setSoTien(double soTien) {
        this.soTien = soTien;
    }
    
}
