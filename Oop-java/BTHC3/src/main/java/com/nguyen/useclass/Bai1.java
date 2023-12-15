/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.useclass;
import com.nguyen.buildclass.Ellipse;
import com.nguyen.buildclass.Circle;

/**
 *
 * @author admin
 */
public class Bai1 {
    public static void main(String[] args) {
        Ellipse e1 = new Ellipse(20, 10);
        Ellipse e2 = new Circle(30);
        e1.hienThi();
        e2.hienThi();
    } 
}
