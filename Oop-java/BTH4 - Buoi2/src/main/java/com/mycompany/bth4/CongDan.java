/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author admin
 */
public class CongDan {   
    private String cccd; 
    private String hoTen;
    private LocalDate ngaySinh;
    private List<TiemChung> tiemChung;
    
    public CongDan(String cccd, String hoTen, LocalDate ngaySinh) {
        this.cccd = cccd;
        this.hoTen = hoTen;
        this.ngaySinh = ngaySinh;
        this.tiemChung = new ArrayList<>();
    }

    public void hienThi() {
        System.out.printf("So cccd: %s\n", this.cccd);
        System.out.printf("Ho ten: %s\n", this.hoTen);
        System.out.printf("Ngay sinh: %s\n", this.ngaySinh.format(DateTimeFormatter.ofPattern("dd/MM/yyyy")));
    }
    
    public void themThongTinTiemChung(TiemChung tc) {
        this.getTiemChung().add(tc);
    }
    
    /**
     * @return the cccd
     */
    public String getCccd() {
        return cccd;
    }

    /**
     * @param cccd the cccd to set
     */
    public void setCccd(String cccd) {
        this.cccd = cccd;
    }

    /**
     * @return the hoTen
     */
    public String getHoTen() {
        return hoTen;
    }

    /**
     * @param hoTen the hoTen to set
     */
    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    /**
     * @return the ngaySinh
     */
    public LocalDate getNgaySinh() {
        return ngaySinh;
    }

    /**
     * @param ngaySinh the ngaySinh to set
     */
    public void setNgaySinh(LocalDate ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    /**
     * @return the tiemChung
     */
    public List<TiemChung> getTiemChung() {
        return tiemChung;
    }

    /**
     * @param tiemChung the tiemChung to set
     */
    public void setTiemChung(List<TiemChung> tiemChung) {
        this.tiemChung = tiemChung;
    }
    
    
}
