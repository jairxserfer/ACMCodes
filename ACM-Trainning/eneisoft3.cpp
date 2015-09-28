#include <bits/stdc++.h>

int tuktuk(int a, int b){
  int k = pow(26,a)* pow(10,b);

}

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while(t--)
  {
    int a , b;
    std::cin >> a>>b;
    if(a ==  0 and b == 0){
      std::cout << "0" << std::endl;
    } else
    {
      int result = tuktuk(a,b);
      std::cout << result << std::endl;
    }

  }
  return 0;
}
