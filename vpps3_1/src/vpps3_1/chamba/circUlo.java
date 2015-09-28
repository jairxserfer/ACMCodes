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
public class circUlo extends pUnto{
    private double r;
    public circUlo(){
        super(); r=1;
    }
    public circUlo(double x, double y, double r){
        super(x,y); this.r=r;
    }
    public String toString(){
        return "\n\tcircUlo\n\t\tcentro: "+super.toString()+
                "\n\t\tradio: "+r+
                "\n\t\tarea: "+area();
    }
     public double area(){
         return Math.PI*Math.pow(r, 2);
     }

    /**
     * @return the r
     */
    public double getR() {
        return r;
    }

    /**
     * @param r the r to set
     */
    public void setR(double r) {
        this.r = r;
    }
    
}
