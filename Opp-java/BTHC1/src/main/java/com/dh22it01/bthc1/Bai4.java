/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.dh22it01.bthc1;

import java.util.Arrays;
import java.util.Collection;
import java.util.Scanner;
import java.util.stream.IntStream;

/**
 *
 * @author NGUYEN
 */
public class Bai4 {
    public static int[] inputArr(int n) {
        int[] a = new int[n];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i<n; i++) {
//            System.out.printf("a[%d] = ", i);
//            a[i] = sc.nextInt();
              a[i] = (int) (Math.random() * 100 + 1);
        }
            return a;
    }
    
    public static void outputArr(int[] a){
        for (int x: a)
            System.out.printf("%d \t", x);
        System.out.println(); //xuong dong
    }
    
    public static boolean soNguyenTo(int x){
        if (x < 2)
            return false;
        for (int i=2;i<=Math.sqrt(x);i++)
            if (x % i == 0) return false;
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap n: ");
        int n = sc.nextByte();
        int[] a = inputArr(n);
        Arrays.sort(a);
        
        outputArr(a);
        System.out.print("Nhap x can tim: ");
        int idx = sc.nextInt();
        idx = Arrays.binarySearch(a, idx);
        System.out.println(idx);
//        int t =0;
//        for (int x: a)
//            if(soNguyenTo(x) == true )
//                t+=x;
//        System.out.printf("Tong so nguyen to: %d", t);
          System.out.println(IntStream.of(a). filter(x->soNguyenTo(x) == true).sum());
          System.out.println(IntStream.of(a). filter(x->x>0).max().orElse(0));
          System.out.println(IntStream.of(a).filter(x->x<0).min().orElse(0));
          System.out.println(IntStream.of(a).summaryStatistics());
         
    } 
}
