#include <bits/stdc++.h>
#include "clases.h"

using namespace std;
using namespace chamba;

int main(int argc, char const *argv[]) {
  pUnto p1;
  pUnto p2(-2.43, 2.4);

  cout<<"\n"<<"El valor de X en el punto P1 es: "<<p1.getX()<<"\n"<<"El valor de Y en el punto P1 es: "<<p1.getY()<<"\n";
  cout<<"\n"<<"El valor de X en el punto P2 es: "<<p2.getX()<<"\n"<<"El valor de Y en el punto P2 es: "<<p2.getY()<<"\n";

  circUlo c1;
  circUlo c2(1,2,4);

  cout<<"\n"<<"El area del primer circulo es: "<<c1.area()<<"\nEl area del segundo circulo es:"<<" "<<c2.area()<<"\n";

  return 0;
}
