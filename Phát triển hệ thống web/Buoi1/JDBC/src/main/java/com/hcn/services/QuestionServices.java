/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.hcn.services;

import com.hcn.jdbc.jdbcUtils;
import com.hcn.pojo.Choice;
import com.hcn.pojo.Question;
import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author admin
 */
public class QuestionServices {
    private Object questions;
    private int questionId;
    public List<Question> getQuestions(int num) throws SQLException {
        List<Question> questions = new ArrayList<>();
        try (Connection conn = jdbcUtils.getConn()) {
            CallableStatement stm = conn.prepareCall("{call get_questions(?) }");
            stm.setInt(1, num);
            
            ResultSet rs = stm.executeQuery();
            while (rs.next()) {
                Question q = new Question(rs.getString("id"), rs.getString("content"), rs.getInt("category_id"));
                questions.add(q);
            }
        }
        return questions;
    }
    
    public List<Choice> getChoices(String questionId) throws SQLException {
        List<Choice> choices = new ArrayList<>();
        try (Connection conn = jdbcUtils.getConn()) {
            CallableStatement stm = conn.prepareCall("{call get_choices(?) }");
            stm.setString(1, questionId);
            
            ResultSet rs = stm.executeQuery();
            while (rs.next()) {
                Choice c = new Choice(rs.getString("id"), rs.getString("content"), rs.getBoolean("is_correct"), rs.getString("question_id"));
                choices.add(c);
            }
        }
        return choices;
    }
}


