/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.hcn.jdbc;

import com.hcn.pojo.Choice;
import com.hcn.pojo.Question;
import com.hcn.services.QuestionServices;
import com.hcn.services.StatsServices;
import java.sql.SQLException;
import java.util.List;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author admin
 */
public class JDBC {

    public static void main(String[] args) throws SQLException {
//        Scanner sc = new Scanner(System.in);
//        QuestionServices s = new QuestionServices();
//        List<Question> questions = s.getQuestions(2);
//        questions.forEach(q -> {
//            System.out.println(q);
//            
//            try {
//                List<Choice> choices = s.getChoices(q.getId());
//                for (int i =0; i < choices.size(); i++) 
//                    System.out.printf("%d. %s\n", i + 1, choices.get(i));
//                System.out.println("Your answer: ");
//                int ans = sc.nextByte();
//                if (choices.get(ans - 1).isCorrect() == true)
//                    System.out.println("Exactly");
//                else 
//                    System.out.println("Wrongly");
//            } catch (SQLException ex) {
//                Logger.getLogger(JDBC.class.getName()).log(Level.SEVERE, null, ex);
//            }            
//        });

        StatsServices s = new StatsServices();
        s.countQuestionsByCate("").forEach(o -> System.out.printf("%d - %s: %d\n", o[0], o[1], o[2]));
        
        System.out.println(s.countWrongQuestion());
        
    }
}
