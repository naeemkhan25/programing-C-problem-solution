/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator;

import java.awt.Color;
import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;


/**
 *
 * @author naeem
 */
public class Calculator {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        new myFrame();
//            JFrame frame=new JFrame();
//frame.setVisible(true); 
//frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//frame.setSize(200,250);
//frame.setLocationRelativeTo(null);
//        
        
        
        
    }
    
}
class myFrame extends JFrame{
    JLabel label=new JLabel("Calculator");
    JLabel label2=new JLabel("title");
    JButton button,button2,button3;
    
    public myFrame(){
        super("calculator");
        this.setVisible(true);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//        setLocation(500,200);
//        setSize(400,450);
        setLayout(null);
         setBounds(500,200,300,300);
        label.setText("Calculator");
        Font font=new Font("Monao",Font.BOLD,40);
         Font font2=new Font("arial",Font.ITALIC,15);
        label.setFont(font);
        add(label);
        add(label2);
//        setLayout(new FlowLayout());
        button=new JButton("Click");
       
        button.setBounds(100,100,70,40);
        button.setFont(font2);
        button.setForeground(Color.WHITE);
        button.setBackground(Color.BLACK);
        label.setBounds(50,10,400,100);
        Container c=getContentPane();
        c.setBackground(Color.GRAY);
        button2=new JButton("onclick");
        button2.setLayout(null);
        button2.setBounds(0,0, 100, 100);
        button3=new JButton("on");
        button3.setLayout(null);
        button3.setBounds(130,130, 30, 30);
         add(button);
          add(button2);
           add(button3);
            

                
               // button.addActionListener(this);
//                button2.addActionListener(this);
//                button3.addActionListener(this);
          
       
        
    }

}
//class Button implements ActionListener{
//    public void actionPerformed(ActionEvent e){
//        System.out.println("Hallo word");
//        
//    }
//}
