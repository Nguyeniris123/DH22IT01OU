/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.buildclass;

/**
 *
 * @author admin
 */
public class HinhVuong extends HinhChuNhat{
    public HinhVuong(double canh) {
        super(canh, canh);
    }

    @Override
    public String layTenHinh() {
        return "Hinh Vuong";
    }
}
