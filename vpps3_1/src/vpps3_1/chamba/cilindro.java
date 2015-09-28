/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package vpps3_1.chamba;

/**
 *
 * @author oficina
 */
public class cilindro  extends circUlo{
    private double h;
    public cilindro(){
        super();h=1;
    }
    public cilindro(double x, double y,
            double r, double h){
        super(x,y,r); this.h=h;
    }
    public String toString(){
        return "\ncilindro\n\tbase: "+super.toString()+
                "\n\taltUra: "+h+
                "\n\tarea: "+this.areasup();
    }
    public double areasup(){
        return 2*super.area()+2*Math.PI*this.getR()*h;
    }
    
    
    
    /**
     * @return the h
     */
    public double getH() {
        return h;
    }

    /**
     * @param h the h to set
     */
    public void setH(double h) {
        this.h = h;
    }
    
}
