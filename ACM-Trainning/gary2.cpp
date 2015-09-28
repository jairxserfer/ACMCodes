#include <bits/stdc++.h>

int calculoDias(double x, double y, int cont)
{
  if( y < 0)
  {
    return cont;
  }
  else {
    x = x*0.9;
    y = y - x;
    cont =  cont + 1;
    return calculoDias(x,y,cont);
  }

}

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
      double x, y;
      int cont = 0;
      std::cin >> x >> y;
      int dias = calculoDias(x,y,cont);
      std::cout << dias << std::endl;
  }
  return 0;
}
