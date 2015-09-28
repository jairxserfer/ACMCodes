#include <bits/stdc++.h>

int max(int a, int b){
  if(a < b)
    return b ;
  if(a > b)
    return a ;
  if (a == b)
    return a ;
}

int main(int argc, char const *argv[]) {
  int a, b;
  while (std::cin >> a >> b) {
    int maximo = max(a,b);
    if( maximo >= 0  and maximo <= 2)
    {
      if( a>=0 and a <= 2 and b>=0 and b<=2)
          std::cout << "nueva" << std::endl;
      else
      {
        if(a>=96 and a<=100 and b>=3 and b<=100)
              std::cout << "menguante" << std::endl;
      }
    }


    if( maximo>= 3 and maximo <= 96)
    {

        if( a>=2 and a <= 96 and b>=2 and b<=96)
          std::cout << "creciente" << std::endl;
        else {
          if(a>=96 and a<=3 and b>=3 and b<=100)
                std::cout << "menguante" << std::endl;
        }
    }


    if( maximo>=97 and maximo <=100 )
        {
            if(a >= 97 and a <= 100 and b <= 100 and b >= 97)
              std::cout << "llena" << std::endl;
              else {
                if(a>=96 and a<=100 and b>=3 and b<=100)
                      std::cout << "menguante" << std::endl;
              }
        }




  }
  return 0;
}
