/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.dh22it01.bthc1;
import java.util.Scanner;
/**
 *
 * @author NGUYEN
 */
public class Bai1 {
    public static void main(String[] args) {
        int n = (int) (Math.random() * 100)+1;
        Scanner sc = new Scanner (System.in);
        int d;
        do {
            System.out.print("Nhap so ban doan: ");
            d = sc.nextByte();
            if (d > n) {
                System.out.println("LON HON");
            } else if (d < n) {
                System.out.println("NHO HON");
            } else {
                System.out.println("Chinh Xac");
            }    
        } while (d != n);
    }
}
