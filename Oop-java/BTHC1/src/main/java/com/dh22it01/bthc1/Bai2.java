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
public class Bai2 {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("n = ");
        int n = sc.nextByte();
        System.out.print("X = ");
        double x = sc.nextDouble();
        double gt = 0;
        for (int i=0;i<=n;i++) {
            System.out.printf("a%d = ", i);
            double a = sc.nextDouble();
            gt += a * Math.pow(x,i);
        }
        System.out.printf("Gia tri = %.1f", gt);
    }
}

