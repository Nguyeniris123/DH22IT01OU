/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.dh22it01.bth;

import java.time.LocalDate;

/**
 *
 * @author admin
 */
public enum KyHan {
    MOT_TUAN(7, 0.5) {
        @Override
        public LocalDate tinhDaoHan(LocalDate d) {
            return d.plusDays(this.khoangThoiGian);
        }

        @Override
        public double tinhLai(double d) {
            return (d* this.laiSuat)/100/12/4;
        }
    },
    MOT_THANG(1, 4.5) {
        @Override
        public LocalDate tinhDaoHan(LocalDate d) {
            return d.plusMonths(1);
        }

        @Override
        public double tinhLai(double d) {
            return (d*this.laiSuat)/100/4;
        }
    };
    
    protected int khoangThoiGian;
    protected double laiSuat;

    private KyHan(int khoangThoiGian, double ls) {
        this.khoangThoiGian = khoangThoiGian;
        this.laiSuat = ls;
    }
    
    public abstract LocalDate tinhDaoHan(LocalDate d);
    public abstract double tinhLai(double d);
}
