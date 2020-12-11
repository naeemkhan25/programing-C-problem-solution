/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exam2;

import java.rmi.server.UID;

 class admission{
     public String Student_name;
     public int student_id;
     public int student_number;
     public String Student_Dept;
     public void Set_data(String St_name,int st_id,int st_number,String St_dept){
         this.Student_name=St_name;
         this.student_id=st_id;
         this.student_number=st_number;
         this.Student_Dept=St_dept;
         
     }
//      public void get_data(){
//          System.out.println(Student_name);
//             System.out.println(student_id);
//             System.out.println(student_number);
//              System.out.println(Student_Dept);
//             
// 
//     }

 }
class CT_marks extends admission{  
    
    public double Ct_1;
    public double Ct_2;
    public double Ct_3;
    public double Avarage;
    
    public void Set_ct_markas(double Ct1,double Ct2,double Ct3){
        this.Ct_1=Ct1;
        this.Ct_2=Ct2;
        this.Ct_3=Ct3;
    }
    public double Avarage(){
        return  Avarage=(Ct_1+Ct_2+Ct_3)/3;
    }
       
}
class Result extends CT_marks{
//     public void Set_data(String St_name,int st_id,int st_number,String St_dept){
//         this.Student_name=St_name;
//         this.student_id=st_id;
//         this.student_number=st_number;
//         this.Student_Dept=St_dept;
//         
//     }
//      public void Set_ct_markas(double Ct1,double Ct2,double Ct3){
//        this.Ct_1=Ct1;
//        this.Ct_2=Ct2;
//        this.Ct_3=Ct3;
//    }
//       public double Avarage(){
//        return  Avarage=(Ct_1+Ct_2+Ct_3)/3;
//    }
//    
    
//    public void alldata(String name,int id,int number,String dpt){
//        this.Student_name=name;
//        this.student_id=id;
//        this.student_number=number;
//        
//       this.Student_Dept=dpt;
//    }
    public void Show_result(){
        System.out.println(this.Student_name);
        System.out.println(this.student_id);
         System.out.println(this.student_number);
         System.out.println(this.Student_Dept);
        
         System.out.println(this.Avarage());
    }
    
}



public class Exam2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
      
        Result rt=new Result();
            rt.Set_data("naeem", 101010, 1221, "cse");
            rt.Set_ct_markas(11, 12, 13);
             rt.Show_result();
    }
    
}