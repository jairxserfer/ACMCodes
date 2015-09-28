#include "bits/stdc++.h"

class operaciones{
  private:

  public:
    //operaciones();
    double suma(double a, double b);
    double division(double a, double b);
    double resta(double a, double b);
    double multiplicacion(double a, double b);
};

double operaciones::resta(double a, double b){
  return a - b;
}

double operaciones::multiplicacion(double a, double b){
  return a*b;
}

double operaciones::suma(double a, double b){
   return a + b;
}

double operaciones::division(double a, double b){
  return a/b;
}
