/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.bth4;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author admin
 */
public class VacXin {

    private static int dem;
    private int id = ++dem;
    private String tenVx;
    private String xuatXu;
    private List<TiemChung> tiemChung;

    public VacXin(String tenVx, String xuatXu) {
        this.tenVx = tenVx;
        this.xuatXu = xuatXu;
        this.tiemChung = new ArrayList<>();
    }

    public void hienThi() {
        System.out.printf("Id: %d\n", this.id);
        System.out.printf("Ten: %s\n", this.tenVx);
        System.out.printf("Xuat xu: %s\n", this.xuatXu);
    }

    public int getId() {
        return id;
    }

    /**
     * @param aId the id to set
     */
    public void setId(int aId) {
        id = aId;
    }

    /**
     * @return the tenVx
     */
    public String getTenVx() {
        return tenVx;
    }

    /**
     * @param tenVx the tenVx to set
     */
    public void setTenVx(String tenVx) {
        this.tenVx = tenVx;
    }

    /**
     * @return the xuatXu
     */
    public String getXuatXu() {
        return xuatXu;
    }

    /**
     * @param xuatXu the xuatXu to set
     */
    public void setXuatXu(String xuatXu) {
        this.xuatXu = xuatXu;
    }

    /**
     * @return the tiemChung
     */
    public List<TiemChung> getTiemChung() {
        return tiemChung;
    }

    /**
     * @param tiemChung the tiemChung to set
     */
    public void setTiemChung(List<TiemChung> tiemChung) {
        this.tiemChung = tiemChung;
    }

}
