package vpps3_1;
import vpps3_1.chamba.*;
/**
 * @author el Profe
 */
public class demoVpps3_1 {

    /**
     * @param args argumentos dEL PROGRAMA
     */
    public static void main(String[] args) {
        pUnto p1 = new pUnto();
        pUnto p2 = new pUnto(-2.34,78.9);
        pUnto p3 = new pUnto(0,0);
        if(p1.equals(p2))
            System.out.println("p1=p2");
        else System.out.println("p1NOOOO=p2");
        if(p1.equals(p3))
            System.out.println("p1=p3");
        else System.out.println("p1NOOOO=p3");
//        System.out.println(p1+"\n"+p2);
//        circUlo c1 = new circUlo();
//        circUlo c2 = new circUlo(1,2,1);
////        System.out.println(c1+"\n"+c2);
//        cilindro d1 = new cilindro();
//        System.out.println(d1);
        rectangUlo r1 = new  rectangUlo();
        rectangUlo r2 = new  rectangUlo(0,0,2,3);
        cUadrado u1 = new cUadrado();
        cUadrado u2 = new cUadrado(1,2,4);
        System.out.println("r1 "+r1);
         System.out.println("r2 "+r2);
          System.out.println("u1 "+u1);
           System.out.println("u2 "+u2);
        
        
 
        
        
    }
    
}
