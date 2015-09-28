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
public class cUadrado extends rectangUlo{
    private double lado;
    public cUadrado(){
        super(0,0,1,1);
    }
    public cUadrado(double x,double y, double lado){
        super(x,y,lado,lado);
    }
    public double areacuadrado(){
        return super.area();
    }
    public String toString(){
        return super.toString();
    }
    /**
     * @return the lado
     */
    public double getLado() {
        return lado;
    }

    /**
     * @param lado the lado to set
     */
    public void setLado(double lado) {
        this.lado = lado;
    }
    
}
