/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

/**
 *
 * @author admin
 */
public class QuanLyCongDan {
    private List<CongDan> cd = new ArrayList<>();
    
    public void them(CongDan ...a) {
        this.cd.addAll(Arrays.asList(a));
    }
    
    public void hienThiDanhSach() {
        this.getCd().forEach(h->h.hienThi());
    }
    
    public List<CongDan> timDsTu2Mui() {
        return this.cd.stream().filter(h->h.getTiemChung().size() >= 2).collect(Collectors.toList());
    }

    /**
     * @return the cd
     */
    public List<CongDan> getCd() {
        return cd;
    }

    /**
     * @param cd the cd to set
     */
    public void setCd(List<CongDan> cd) {
        this.cd = cd;
    }
        
    
}
