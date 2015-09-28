#include <bits/stdc++.h>
int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a >> b;
  if( b > a )
    std::cout << b << std::endl;
    else
      {
          int result = calcularNumero(a,b);
          std::cout << result << std::endl;
      }
  return 0;
}
