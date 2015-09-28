#include <bits/stdc++.h>
#include "operaciones.h"

using namespace std;

int main(int argc, char const *argv[]) {
  operaciones m;
  double a = 5, b =3;
  double k = m.suma(a,b);
  double z = m.division(a,b);
  double q = m.multiplicacion(a,b);
  double t = m.resta(a,b);

  cout<<"La suma es: "<<k<<endl<<"La division es: "<<z<<endl<<"La multiplicacion es: "<<q<<endl<<"La resta es: "<<t<<endl;
  return 0;
}
