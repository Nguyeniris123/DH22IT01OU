/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.time.LocalDate;
import java.util.Scanner;

/**
 *
 * @author admin
 */
public class TiemChung {
    private CongDan cd;
    private VacXin vx;
    private LocalDate ngayTiem;
    private String diaDiem;

    public TiemChung(CongDan cd, VacXin vx, String diaDiem) {
        this.cd = cd;
        this.vx = vx;
        this.ngayTiem = LocalDate.now();
        this.diaDiem = diaDiem;
        this.cd.getTiemChung().add(this);
        this.vx.getTiemChung().add(this);
    }
    
    /**
     * @return the cd
     */
    public CongDan getCd() {
        return cd;
    }

    /**
     * @param cd the cd to set
     */
    public void setCd(CongDan cd) {
        this.cd = cd;
    }

    /**
     * @return the vx
     */
    public VacXin getVx() {
        return vx;
    }

    /**
     * @param vx the vx to set
     */
    public void setVx(VacXin vx) {
        this.vx = vx;
    }

    /**
     * @return the ngayTiem
     */
    public LocalDate getNgayTiem() {
        return ngayTiem;
    }

    /**
     * @param ngayTiem the ngayTiem to set
     */
    public void setNgayTiem(LocalDate ngayTiem) {
        this.ngayTiem = ngayTiem;
    }

    /**
     * @return the diaDiem
     */
    public String getDiaDiem() {
        return diaDiem;
    }

    /**
     * @param diaDiem the diaDiem to set
     */
    public void setDiaDiem(String diaDiem) {
        this.diaDiem = diaDiem;
    }
}
