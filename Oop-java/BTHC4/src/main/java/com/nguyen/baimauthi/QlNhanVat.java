/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.baimauthi;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

/**
 *
 * @author admin
 */
public class QlNhanVat {
    private List <NhanVat> nv = new ArrayList<>();
    
    public void themNv(NhanVat... a) {
        this.nv.addAll(Arrays.asList(a));
    }
    
    public void hienThids() {
        this.nv.forEach(h->h.hienThi());
    }
    
    public void sapXep() {
        this.nv.sort(Comparator.comparing(NhanVat::).reversed());
    }
   
    /**
     * @return the nv
     */
    public List <NhanVat> getNv() {
        return nv;
    }

    /**
     * @param nv the nv to set
     */
    public void setNv(List <NhanVat> nv) {
        this.nv = nv;
    }
    
    
}
