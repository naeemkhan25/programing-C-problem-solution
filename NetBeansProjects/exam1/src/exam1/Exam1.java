/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exam1;

interface interface1{
    public abstract void  method1();
    
}
interface interface2 extends interface1{
    public abstract void method2();
    
}
class OOP_LAB implements interface2{

    public OOP_LAB() {
        method1();
        method2();
    }
    
  public void method1(){
      System.out.println("this is method1");
     
}
    public void method2(){
      System.out.println("this is method2");
     
}
}
public class Exam1 {

    
    public static void main(String[] args){
        // TODO code application logic here
        OOP_LAB OOP=new OOP_LAB();
       
    }
    
}
