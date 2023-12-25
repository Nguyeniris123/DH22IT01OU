/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.dh22it01.bth;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

/**
 *
 * @author admin
 */
public class CoKyHan extends KoKyHan {
    private KyHan KyHan;
    private LocalDate ngayDaoHan;

    public CoKyHan(String tenTk, double soTien, KyHan KyHan) {
        super(tenTk, soTien);
        this.KyHan = KyHan;
        
//        switch(KyHan) {
//            case MOT_TUAN:
//                this.ngayDaoHan = this.ngayDaoHan.plusDays(7);
//                break;
//            case MOT_THANG: 
//                this.ngayDaoHan = this.ngayDaoHan.plusMonths(1);
//                break; 
//        }    

        this.ngayDaoHan = KyHan.tinhDaoHan(LocalDate.now());
    }
 
    @Override
    public double tienLai() {
        return this.KyHan.tinhLai(this.soTien);
    }
    
    @Override
    public boolean isDaoHan() {
        return this.ngayDaoHan.equals(LocalDate.now());
    }
    
    @Override
    public void hienThi() {
        super.hienThi(); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/OverriddenMethodBody
        System.out.printf("Ky han: %s\nNgay dao han: %s\n", 
                this.KyHan, this.ngayDaoHan.format(DateTimeFormatter.ofPattern("dd/MM/yyyy")));
    }
    
    
    /**
     * @return the KyHan
     */
    public KyHan getKyHan() {
        return KyHan;
    }

    /**
     * @param KyHan the KyHan to set
     */
    public void setKyHan(KyHan KyHan) {
        this.KyHan = KyHan;
    }

    /**
     * @return the ngayDaoHan
     */
    public LocalDate getNgayDaoHan() {
        return ngayDaoHan;
    }

    /**
     * @param ngayDaoHan the ngayDaoHan to set
     */
    public void setNgayDaoHan(LocalDate ngayDaoHan) {
        this.ngayDaoHan = ngayDaoHan;
    }
    
    
    
}
