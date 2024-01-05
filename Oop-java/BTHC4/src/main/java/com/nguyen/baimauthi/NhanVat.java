/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.baimauthi;

import java.util.List;

/**
 *
 * @author admin
 */
public class NhanVat {
    private static int dem;
    private int maNv = ++dem;
    private String tenNv;
    private int luotChoi;
    private int hp;
    
    public void hienThi() {
        System.out.printf("Ma NV: %d\nTen nhan vat: %s\nLuot choi: %d\nHP: %d\nvat pham dang co: %d\n", 
                this.maNv, this.tenNv, this.luotChoi, this.hp);
    }
}
