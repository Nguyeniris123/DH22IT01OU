/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.dh22it01.bthc1;

import java.util.Scanner;
import java.util.stream.IntStream;

/**
 *
 * @author NGUYEN
 */
public class Bai5 {

    public static int[][] inputMatrix(int m, int n) {
        int a[][] = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = (int) (Math.random() * 100 + 1);
            }
        }
        return a;
    }

    public static void outputMatrix(int[][] a) {
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.printf("%d\t", a[i][j]);
            }
            System.out.println();
        }
    }

    public static void tongDongCot(int[][] a) {
        for (int i = 0; i < a.length; i++) {
            int td = 0;
            for (int j = 0; j < a[i].length; j++) {
                td += a[i][j];
            }
            System.out.printf("Tong dong thu %d la %d \n:", i, td);
        }

        for (int j = 0; j < a[0].length; j++) {
            int tc = 0;
            for (int i = 0; i < a.length; i++) {
                tc += a[i][j];
            }
            System.out.printf("Tong cot thu %d la %d \n:", j, tc);
        }
    }

    public static void maxDong(int[][] a) {
        int max = Integer.MIN_VALUE;
        int idx = -1;
        for (int i = 0; i < a.length; i++) {
            int t = IntStream.of(a[i]).sum();
            if (max < t) {
                max = t;
                idx = i;
            }
        }
        System.out.printf("Dong %d co tong lon nhat la %d \n", idx, max);
    }

    public static void minCot(int[][] a) {
        int min = Integer.MAX_VALUE;
        int idx = -1;
        for (int j = 0; j < a[0].length; j++) {
            int t = 0;
            for (int i = 0; i < a.length; i++) {
                t += a[i][j];
            }

            if (t < min) {
                min = t;
                idx = j;
            }
        }
        System.out.printf("Cot %d co tong nho nhat la %d \n", idx, min);
    }

    public static void calculateRowStatistics(int[][] a, int rowIndex) {
        if (rowIndex >= 0 && rowIndex < a.length) {
            int[] row = a[rowIndex];
            int rowSum = 0;
            int minInRow = Integer.MAX_VALUE;

            for (int value : row) {
                rowSum += value;
                if (value < minInRow) {
                    minInRow = value;
                }
            }

            System.out.printf("Tong cua dong %d la %d\n", rowIndex, rowSum);
            System.out.printf("Gia tri nho nhat trong dong %d la %d\n", rowIndex, minInRow);
        } else {
            System.out.println("Chi so dong khong hop le.");
        }
    }

    public static void calculateColumnStatistics(int[][] a, int columnIndex) {
        if (columnIndex >= 0 && columnIndex < a[0].length) {
            int columnSum = 0;
            int maxInColumn = Integer.MIN_VALUE;

            for (int i = 0; i < a.length; i++) {
                columnSum += a[i][columnIndex];
                if (a[i][columnIndex] > maxInColumn) {
                    maxInColumn = a[i][columnIndex];
                }
            }

            System.out.printf("Tong cua cot %d la %d\n", columnIndex, columnSum);
            System.out.printf("Gia tri lon nhat trong cot %d la %d\n", columnIndex, maxInColumn);
        } else {
            System.out.println("Chi so cot khong hop le.");
        }
    }

    public static void main(String[] args) {
        int m, n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap m va n: ");
        m = sc.nextInt();
        n = sc.nextInt();
        int a[][] = inputMatrix(m, n);
        outputMatrix(a);
        tongDongCot(a);
        maxDong(a);
        minCot(a);
        calculateRowStatistics(a,2);
        calculateColumnStatistics(a,2);
    }
}
