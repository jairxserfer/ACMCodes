#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n;

  while( std::cin >> n && n != 0 )
  {
    std::vector<int> mv;
    while ( n-- ) {
      int a;
      std::cin >> a;
      if(a == 0) break;
      mv.push_back(a);
    }
    sort(mv.begin(),  mv.end());
    int buffer = 0;
    int cont = 0 ;
    for( int i = 0; i < mv.size(); i++ )
    {
      if(mv[i] != buffer)
      {

        if( buffer != 0)
        {
          std::cout << mv[i-1];
          std::cout << " aparece ";
          std::cout << cont + 1;
          if(cont+ 1 > 1)
          {
            std::cout << " veces" << std::endl;
          } else {
            std::cout << " vez" << std::endl;
          }
        }
        buffer = mv[i];
        cont = 0;
      } else
      {
        cont++;
      }

      if( i == mv.size ()- 1 )
      {
          std::cout << mv[i];
          std::cout << " aparece ";
          std::cout << cont + 1;
          if(cont+ 1 > 1)
          {
            std::cout << " veces" << std::endl;
          } else {
            std::cout << " vez" << std::endl;
          }
        }
      }
  }

  return 0;
}
