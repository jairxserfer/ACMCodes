#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  while(n--)
  {
    int matriz[6][6];
    for( int i = 1;  i <= 5 ; i++ )
    {
      for( int j = 1; j <=5; j++ )
      {
        std::cin >> matriz[i][j];
      }
    }
    int cont1 = 0;
    int cont2 = 0;
    for( int i = 1;  i <= 5 ; i++ )
    {
      for( int j = 1; j <=5; j++ )
      {
        if(matriz[i][j] == 1) {
          cont1 = 3 - i;
          cont1 = abs(cont1);

          cont2 = 3 - j;
          cont2 = abs(cont2);
        }
      }
    }

    std::cout << cont2+cont1 << std::endl;

  }
  return 0;
}
