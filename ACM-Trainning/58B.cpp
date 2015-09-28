#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int a;
  std::cin >> a;
  if(a!= 1)
  {
      std::cout<< a<< " " ;
  }
  
  while(a%2 == 0){
    a = a / 2;
    if(a!= 1)
    {
        std::cout<< a<< " " ;
    }

  }
  std::cout << "1" << std::endl;
  return 0;
}
