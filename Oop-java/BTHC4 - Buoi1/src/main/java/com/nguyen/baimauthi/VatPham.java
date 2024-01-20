/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.baimauthi;

/**
 *
 * @author admin
 */
public abstract class VatPham {
    private static int dem;
    private String maVatPham;
    
    {
        maVatPham = String.format("A%0d", ++dem);
    }
    
    
    public abstract void tacDung();
}
