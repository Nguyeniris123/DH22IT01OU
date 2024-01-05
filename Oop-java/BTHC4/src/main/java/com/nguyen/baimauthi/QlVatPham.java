/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.baimauthi;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author admin
 */
public class QlVatPham {
    private List<VatPham> vp = new ArrayList<>();

    public void themVP(VatPham... a) {
        this.vp.addAll(Arrays.asList(a));
    }
    
    /**
     * @return the vp
     */
    public List<VatPham> getVp() {
        return vp;
    }

    /**
     * @param vp the vp to set
     */
    public void setVp(List<VatPham> vp) {
        this.vp = vp;
    }
    
    
}
