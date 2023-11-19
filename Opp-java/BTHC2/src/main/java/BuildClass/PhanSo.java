/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BuildClass;

import java.util.Scanner;

/**
 *
 * @author admin
 */
public class PhanSo {
    private int tuSo;
    private int mauSo;

    public PhanSo(int tuSo, int mauSo) {
        this.tuSo = tuSo;
        this.mauSo = mauSo;
    }

    public PhanSo() {
        this(0,1);
    }
    
    public void nhapPs() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Tu so = ");
        this.tuSo = sc.nextInt();
        System.out.print("Mau so = ");
        this.mauSo = sc.nextInt();
    }
     
    public static int ucln(int a, int b){
    if (a == 0 || b == 0){
        return 1;
    }
    a = Math.abs(a);
    b = Math.abs(b);
    while (a != b){
        if (a > b){
            a -= b;
        } else{
            b -= a;
        }
    }
    return a;
}
    
    public PhanSo rutGon() {
        int u = ucln(this.tuSo, this.mauSo);
        return new PhanSo(this.tuSo/u, this.mauSo/u);
    }
    
    public PhanSo congPs (PhanSo p) {
        return new PhanSo (this.tuSo * p.mauSo + p.tuSo * this.mauSo,this.mauSo * p.mauSo);
    }
    
    public int soSanh(PhanSo p) {
        double v1 = this.tuSo * 1.0/this.mauSo;
        double v2 = p.tuSo * 1.0/p.mauSo;
        if ( v1 > v2)
            return 1;
        else if ( v1 < v2)
            return -1;
        return 0;
    }
    
    public void hienThi () {
        System.out.printf("%d/%d\n", this.tuSo, this.mauSo);
    }

    /**
     * @return the tuSo
     */
    public int getTuSo() {
        return tuSo;
    }

    /**
     * @param tuSo the tuSo to set
     */
    public void setTuSo(int tuSo) {
        this.tuSo = tuSo;
    }

    /**
     * @return the maSo
     */
    public int getMauSo() {
        return mauSo;
    }

    /**
     * @param mauSo
     */
    public void setMauSo(int mauSo) {
        this.mauSo = mauSo;
    }
    
}
