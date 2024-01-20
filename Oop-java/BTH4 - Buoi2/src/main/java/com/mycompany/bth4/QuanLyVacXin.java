/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author admin
 */
public class QuanLyVacXin {
    private List<VacXin> vx = new ArrayList<>();
    
    public void them(VacXin ...a) {
        this.vx.addAll(Arrays.asList(a));
    }
    
    public void hienThiDs() {
        this.getVx().forEach(h-> h.hienThi());
    }

    /**
     * @return the vx
     */
    public List<VacXin> getVx() {
        return vx;
    }

    /**
     * @param vx the vx to set
     */
    public void setVx(List<VacXin> vx) {
        this.vx = vx;
    }
}
