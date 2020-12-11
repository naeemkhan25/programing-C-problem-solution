/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkginterface;

 interface name{
    public abstract void namekhan();
}
 class khan implements name{
        public void namekhan(){
            System.out.println("pkginterface.khan.namekhan()"); 
        }
}
public class Interface {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       khan n=new khan();
    }
    
}
