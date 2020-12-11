/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package encaptulation;
// class ncaptulation{
//  private String name;



//  protected String good;
//
//   protected String love(){
//      return "you are my love";
//   }
// public String getName(){
//      return name;
//      
//   }
//   public void setNam(String name){
//       this.name=name;
//      
//       
//   }
// 
//    
//}
//
//
// class love extends ncaptulation{
//     String love;
//     public void SetLove(String g){
//         good=g;
//     }
//  public void display(){
//      System.out.println(good);
//     
//  }
//     
//    
//}


//abstract class Teacher{
//    
//   final String khan="love";
//    abstract void display();
//    abstract void getData(String name);
// 
//}
//
//class student extends Teacher{
//
//    public student() {
//        System.out.println(khan);
//    }
//    
//    private String name;
//    void display(){
//        System.out.println("khan");
//    }
//    void getData(String name){
//       this.name=name;
//    }
//}
 interface khan{
//    abstract String Name;
//    abstract int number;
 abstract void display();
          
          
}
 class Name implements khan{
  public String Name="khan";
  public int number=19;
  
  
     public void display(){
        System.out.println("encaptulation.name.display()");
    }
        
}
public class Encaptulation {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
//       ncaptulation en=new ncaptulation();
//      en.setNam("love");
//     
////        System.err.println(en.getName());
//        love lov=new love();
//        lov.SetLove("main love");
//        lov.display();
//        
//         System.out.println(lov.love());

    Name n=new Name();
    }
    
}
