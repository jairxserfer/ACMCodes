/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package vpps3_1.chamba;

/**
 *
 * @author Pregrado
 */
public class rectangUlo extends pUnto{
    private double l;
    private double a;
    public rectangUlo(){
        super();
        l=2;a=1;
    }
    public rectangUlo(double x, double y, double l, double a){
        super(x,y); this.l=l; this.a=a;
    }
    public String toString(){
        return "\n\trectangUlo\n\t\tvizq: "+super.toString()+
                "\n\t\tarea: "+area();
    }
    public double area(){
        return l*a;
    }

    /**
     * @return the l
     */
    public double getL() {
        return l;
    }

    /**
     * @param l the l to set
     */
    public void setL(double l) {
        this.l = l;
    }

    /**
     * @return the a
     */
    public double getA() {
        return a;
    }

    /**
     * @param a the a to set
     */
    public void setA(double a) {
        this.a = a;
    }
    
    
}