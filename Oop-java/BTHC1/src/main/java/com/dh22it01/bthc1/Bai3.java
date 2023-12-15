/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.dh22it01.bthc1;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
/**
 *
 * @author NGUYEN
 */
public class Bai3 {
    public static void main(String[] args) throws FileNotFoundException {
        //cau a
        String email;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Nhap email: ");
        email = scanner.nextLine();
        email = email.substring(0, email.indexOf("@"));
        System.out.println(email);
        //cau b
        String str = "   LAp     TRINH   JAva     ";
        int count = 0;
        for (int i = 0; i<str.length();i++)
            if (Character.isUpperCase(str.charAt(i)) == true)
                count++;
        System.out.println("So ki tu hoa: " + count);
        //cau c
        File f = new File ("src/main/resource/data.txt");
        Scanner sc = new Scanner(f);
        String s = sc.nextLine();
        s = s.replaceAll("\\{file\\}", "Tap tin");
        System.out.println(s);
        //cau d
        String[] a = str.trim().split("[\\str,;]+");
        System.out.println("So tu = "+a.length);
        
        String m = a[0];
        for (int i = 0; i<a.length; i++)
            if (a[i].length() > m.length())
                m = a[i];
        System.err.println("Tu dai nhat la: " + m);
        
        //cau e
        String kq = "";
        for (String x: a)
            kq += x.substring(0,1).toUpperCase() + x.substring(1).toLowerCase() + " ";
            kq.trim();
            System.out.println(kq);
            //co the su dung stringbuilder
    }
}