package vpps3_1.chamba;

/**
 *
 * @author Pregrado
 */
public class pUnto {
     private double x;
     private double y;
     public pUnto(){
         x=y=0;
     }
     public pUnto(double x,double y){
         this.x=x; this.y=y;
     }
     public String toString(){
         return "["+x+","+y+"]";
     }
     public boolean equals(Object o){
         if(o instanceof pUnto){
             pUnto otro = (pUnto)o;
             if(this.x==otro.x &&
                     this.y==otro.y)
                 return true;
             else return false;
         }
         else return false;
     }


    /**
     * @return the x
     */
    public double getX() {
        return x;
    }

    /**
     * @param x the x to set
     */
    public void setX(double x) {
        this.x = x;
    }

    /**
     * @return the y
     */
    public double getY() {
        return y;
    }

    /**
     * @param y the y to set
     */
    public void setY(double y) {
        this.y = y;
    }

}
