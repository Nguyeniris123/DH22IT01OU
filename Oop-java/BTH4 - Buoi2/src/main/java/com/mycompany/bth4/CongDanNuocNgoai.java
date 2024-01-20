/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.time.LocalDate;

/**
 *
 * @author admin
 */
public class CongDanNuocNgoai extends CongDan {
    private String soHoChieu;

    public CongDanNuocNgoai(String cccd, String hoTen, LocalDate ngaySinh, String soHoChieu) {
        super(cccd, hoTen, ngaySinh);
        this.soHoChieu = soHoChieu;
    }

    @Override
    public void hienThi() {
        super.hienThi();
        System.out.printf("So ho chieu: %s\n", this.soHoChieu);
    }
    
    /**
     * @return the soHoChieu
     */
    public String getSoHoChieu() {
        return soHoChieu;
    }

    /**
     * @param soHoChieu the soHoChieu to set
     */
    public void setSoHoChieu(String soHoChieu) {
        this.soHoChieu = soHoChieu;
    }
    
    
}
