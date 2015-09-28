#include "bits/stdc++.h"
#define PI atan(1)*4

using namespace std;

namespace chamba{
  class pUnto{
    private:
      double x;
      double y;
    public:
      /**/
      pUnto();
      pUnto( double x, double y );
      double getX();
      double getY();
      void setX(double h);
      void setY(double k);
  };

  class circUlo : public pUnto{
    private:
      double r;
    public:
      circUlo();
      circUlo( double x, double y, double r );
      double area();
      double getR();
      void setR(double m);
  };

  pUnto::pUnto(){
     x = y  = 0;
  }

  pUnto::pUnto( double h, double k){
      x = h;
      y = k;
  }

  double pUnto::getX(){
    return x;
  }

  double pUnto::getY(){
    return y;
  }

  void pUnto::setX( double h ){
    x = h;
  }

  void pUnto::setY( double k ){
    y = k;
  }

  circUlo::circUlo(){
    r = 1;
  }

  circUlo::circUlo( double x, double y, double h ){
    r = h;
  }

  double circUlo::area(){
      return PI*r*r;
  }

  double circUlo::getR(){
    return r;
  }

  void circUlo::setR(double m){
     r = m;
  }
}
