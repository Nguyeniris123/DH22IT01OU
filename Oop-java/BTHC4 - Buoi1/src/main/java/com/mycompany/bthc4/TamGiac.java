/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bthc4;

/**
 *
 * @author admin
 */
public class TamGiac extends Hinh {
    private double a, b, c;

    public TamGiac(String ten, double a, double b, double c) {
        super(ten);
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override
    public double tinhDienTich() {
        double p = this.tinhChuVi()/2;
        return Math.sqrt(p*(p-this.a)*(p-this.b)*(p-this.c));
    }

    @Override
    public double tinhChuVi() {
        return  this.a+this.b+this.c;
    }
    
    @Override
    public boolean equals(Object obj) {
        if (obj instanceof TamGiac) {
            TamGiac t1 = (TamGiac) obj;
            return super.equals(obj) && this.a == t1.a && this.b == t1.b && this.c == t1.c;
        }
        return false;
    }
    
    /**
     * @return the a
     */
    public double getA() {
        return a;
    }

    /**
     * @param a the a to set
     */
    public void setA(double a) {
        this.a = a;
    }

    /**
     * @return the b
     */
    public double getB() {
        return b;
    }

    /**
     * @param b the b to set
     */
    public void setB(double b) {
        this.b = b;
    }

    /**
     * @return the c
     */
    public double getC() {
        return c;
    }

    /**
     * @param c the c to set
     */
    public void setC(double c) {
        this.c = c;
    }
}
