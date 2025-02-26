/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.hcn.pojo;

/**
 *
 * @author admin
 */
public class Question {
    private String id;
    private String content;
    private int cateId;

    public Question(String id, String content, int cateId) {
        this.id = id;
        this.content = content;
        this.cateId = cateId;
    }

    public Question() {
    }

    @Override
    public String toString() {
        return this.content;
    }
    
    

    /**
     * @return the id
     */
    public String getId() {
        return id;
    }

    /**
     * @param id the id to set
     */
    public void setId(String id) {
        this.id = id;
    }

    /**
     * @return the content
     */
    public String getContent() {
        return content;
    }

    /**
     * @param content the content to set
     */
    public void setContent(String content) {
        this.content = content;
    }

    /**
     * @return the cateId
     */
    public int getCateId() {
        return cateId;
    }

    /**
     * @param cateId the cateId to set
     */
    public void setCateId(int cateId) {
        this.cateId = cateId;
    }
    
}
