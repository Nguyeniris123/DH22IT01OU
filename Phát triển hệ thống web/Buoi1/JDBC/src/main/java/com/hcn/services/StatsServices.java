/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.hcn.services;

import com.hcn.jdbc.jdbcUtils;
import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Types;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author admin
 */
public class StatsServices {
    public List<Object[]> countQuestionsByCate(String kw) throws SQLException {
        List<Object[]> results = new ArrayList<>();
        try (Connection conn = jdbcUtils.getConn()) {
            CallableStatement stm = conn.prepareCall("{call count_prods_by_cate(?) }");
            stm.setString(1, kw);
            
            ResultSet rs = stm.executeQuery();
            while (rs.next()) {
                Object[] a = { rs.getInt("id"), rs.getString("name"), rs.getInt("quantity")  };
                results.add(a);
            }
        }
        return results;
    }
    
    public int countWrongQuestion() throws SQLException {
        try (Connection conn = jdbcUtils.getConn()) {
            CallableStatement stm = conn.prepareCall("{ call count_wrong_questions(?)  }");
            stm.registerOutParameter(1, Types.INTEGER);
            stm.execute();
            
            return stm.getInt(1);
        }
        
    }
}
