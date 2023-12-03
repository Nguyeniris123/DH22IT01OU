/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.useclass;
import com.nguyen.buildclass.Hinh;
import com.nguyen.buildclass.HinhChuNhat;
import com.nguyen.buildclass.HinhVuong;
import com.nguyen.buildclass.TamGiac;
import com.nguyen.buildclass.TamGiacCan;
import com.nguyen.buildclass.TamGiacDeu;
import java.util.Arrays;

/**
 *
 * @author admin
 */
public class Bai2 {
    public static void main(String[] args) throws Exception {
        HinhChuNhat hcn1 = new HinhChuNhat(3, 2);
        HinhChuNhat hcn2 = new HinhVuong(3);
//        hcn1.hienThi();
//        hcn2.hienThi();
        
        TamGiac tg1 = new TamGiac(2, 3, 2);
        TamGiac tg2 = new TamGiacCan(2,4);
        TamGiac tg3 = new TamGiacDeu(2);
//        tg1.hienThi();
//        tg2.hienThi();
//        tg3.hienThi();
        

        // Mảng lưu đc các hình trên
        Hinh[] a = {hcn1,tg1,hcn2,hcn1,tg1,tg2,tg3};
        
//        Arrays.sort(a, (h1, h2) -> {
//            double t11 = h1.tinhDienTich();
//            double t22 = h2.tinhDienTich();
//
//            // sắp xếp các hình giảm dần theo s (Tang dan thi doi -1 thanh 1 va nguoc lai)
//            // so sanh
//            if (t11 > t22)
//                return -1;
//            else if (t11 < t22) 
//                return 1;
//            return 0;
//        });
//        for (var x : a)
//            x.hienThi();


        // Sắp xếp các hình tăng dần theo tên, nếu cùng tên thì giảm dần theo diện tích
        Arrays.sort(a, (h1,h2) -> {
            String ten1 = h1.layTenHinh();
            String ten2 = h2.layTenHinh();
            
            if (ten1.equals(ten2) == true) {
                double t11 = h1.tinhDienTich();
                double t22 = h2.tinhDienTich();
                if (t11 > t22) {
                    return -1;
                } else if (t11 < t22) {
                    return 1;
                }
                return 0;
            }
            return ten1.compareTo(ten2);
        });
        for (var x: a)
            x.hienThi();
    }
}
