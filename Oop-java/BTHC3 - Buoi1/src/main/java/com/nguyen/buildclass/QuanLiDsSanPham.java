/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.buildclass;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

/**
 *
 * @author NGUYEN
 */
public class QuanLiDsSanPham {
    private List <SanPham> sp = new ArrayList<>();

    public void themSp(SanPham... a) {
        this.getSp().addAll(Arrays.asList(a));
    }
    
    public void themSp() {
        SanPham sp = new SanPham();
        sp.nhap1Sp();
        this.getSp().add(sp);
    }
    
    public void xoaSp() {
        
    }
    
    public void sapXep() {
        this.sp.sort((h1, h2) -> -h1.soSanh(h2));
    }
    
    //id la ma san pham
    public SanPham timKiem (int id) {
       return this.sp.stream().filter(h -> h.getMaSanPham()== id).findFirst().get();
    }
   
    //kw la ten san pham
    public List<SanPham> timKiem(String kw) {
        return this.sp.stream().filter(h -> h.getTenSanPham().contains(kw) == true).collect(Collectors.toList());
    }
    
    //Tim kim theo khoang gia ban
   
    
    public void hienThiDs() {
        this.sp.forEach(h -> h.hienThi());
    }
    /**
     * @return the sp
     */
    public List <SanPham> getSp() {
        return sp;
    }

    /**
     * @param sp the sp to set
     */
    public void setSp(List <SanPham> sp) {
        this.sp = sp;
    }
    
    
}
