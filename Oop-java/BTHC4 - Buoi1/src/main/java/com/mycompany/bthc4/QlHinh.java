/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bthc4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

/**
 *
 * @author admin
 */
public class QlHinh {
    private List <Hinh> h = new ArrayList<>();

    public void themHinh(Hinh... a) {
        this.getH().addAll(Arrays.asList(a));
    }
    
    public void xoaHinh(String kw) {
        this.h.removeIf(t -> t.getTen().contains(kw));
    }
    
    public void sapxepDs() {
        this.h.sort(Comparator.comparing(Hinh::tinhDienTich).reversed());
    }
    
    public void sapxepHinh() {
        this.h.sort(Comparator.comparing(Hinh::getTen).thenComparing(Hinh::tinhDienTich, Comparator.reverseOrder()));
        
//        this.h.sort((h1, h2) -> {
//        String ten = h1.getTen();
//        String ten2 = h2.getTen();
//        
//        if (ten.equals(ten2) == true) {
//            double dt1 = h1.tinhDienTich();
//            double dt2 = h2.tinhDienTich();
//            
//            return -(dt1>dt2?1:(dt1<dt2?-1:0));
//        }
//        return ten.compareTo(ten2);
//    });
    }
    
    public void hienThiDs() {
        this.h.forEach(t -> System.out.println(t));
    }
    
//    public List <Hinh> timHCN() {
//        return this.h.stream().filter(t -> t instanceof HinhChuNhat).collect(Collectors.toList());
//    }
    
    public List <Hinh> timTheoLoai(String classPath) throws ClassNotFoundException {
        Class c = Class.forName(classPath);
        return this.h.stream().filter(t -> c.isInstance(t)).collect(Collectors.toList());
    }
    
    public int timHinh(Hinh h) {
        return this.h.indexOf(h);
    }
    
    /**
     * @return the h
     */
    public List <Hinh> getH() {
        return h;
    }

    /**
     * @param h the h to set
     */
    public void setH(List <Hinh> h) {
        this.h = h;
    }
    
}
