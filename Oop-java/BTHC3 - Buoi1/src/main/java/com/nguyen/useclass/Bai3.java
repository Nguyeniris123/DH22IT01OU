/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.nguyen.useclass;
import com.nguyen.buildclass.BangDia;
import com.nguyen.buildclass.QuanLiDsSanPham;
import com.nguyen.buildclass.Sach;
import com.nguyen.buildclass.SanPham;
import java.util.Scanner;

/**
 *
 * @author NGUYEN
 */
public class Bai3 {
    public static void main(String[] args) {
        SanPham sp = new SanPham(1,"nguyen", "deptrai", "ho", 100);
        Sach sa = new Sach();
        BangDia bd = new BangDia();
        QuanLiDsSanPham ql = new QuanLiDsSanPham();
        
        do {
            System.out.print("===MENU===\n"
                + "1. Them san Pham\n"
                + "2. Xoa san pham\n"
                + "3. Cap nhat san pham\n"
                + "4. Tim kiem san pham\n"
                + "5. Sap xep gism dan\n"
                + "6. Xem danh sach san pham\n"
                + "0. Thoat\n"
                + "Moi ban chon: ");
            Scanner sc = new Scanner(System.in);
            int n = sc.nextByte();
            switch (n) {
                case 1: {
                    System.out.print("Ban muon them:\n"
                            + "1.Sach\n"
                            + "2.Bang Dia\n"
                            + "0. Thoat\n"
                            + "Moi ban chon: ");
                    int z = sc.nextByte();
                    switch(z) {
                        case 1: {
                            sa.nhap1Sp();
                            ql.themSp(sa);
                            sa = new Sach();
                            break;
                        }
                        
                        case 2: {
                            bd.nhap1Sp();
                            ql.themSp(bd);
                            bd = new BangDia();
                            break;
                        }
                        
                        case 0: 
                            break;
                        default:
                            break;
                    }
                    break;
                }

                case 2: {
                    
                    break;
                }

                case 3: {
                    
                    break;
                }

                case 4: {
                    System.out.print("Ban muon tim kiem: \n"
                            + "1. Tim kiem theo Ma San Pham\n"
                            + "2. Tim kiem theo Ten San Pham\n"
                            + "0. Thoat\n"
                            + "Moi ban chon: ");
                    int t = sc.nextByte();
                    switch(t) {
                        case 1: {
                            System.out.print("Tim kiem sp co ma la: ");
                            int id = sc.nextByte();
                            SanPham tk1 = ql.timKiem(id);
                            tk1.hienThi();
                            tk1 = new SanPham();
                            break;
                        }
                        
                        case 2: {
                            System.out.print("Tim kiem sp co ten la: ");
                            sc.nextLine();
                            String ten = sc.nextLine();
                            ql.timKiem(ten).forEach(h -> h.hienThi());
                            break;
                        }   
                        
                        case 0: 
                            break;
                        default:
                            break;
                    } 
                    break;
                }

                case 5: {
                    ql.sapXep();
                    System.out.println("Danh sach da duoc sap xep giam dan");
                    break;
                }

                case 6: {
                    ql.hienThiDs();
                    break;
                }

                case 0: {
                    System.out.println("Cam on ban da su dung chuong trinh");
                    return;
                }
                default:
                    break;
            }
        } while (true);
    }
}
