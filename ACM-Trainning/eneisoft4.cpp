#include <bits/stdc++.h>


int main(int argc, char const *argv[]) {
  int n, t, l;
  while(std::cin >> n >> t >> l)
  {
      std::vector<int> mv;
      int ns = n-1;
      while(ns--)
      {
        int s;
        std::cin >> s;
        if( abs(t-s) <= l )
        {
          mv.push_back(abs(t-s));
          t = s;
        } else{
          mv.push_back(0);
        }
      }
      int puntajA = 0;
      int puntajB = 0;
      for(int i = 0; i < mv.size(); i++)
      {
        if(i%2 == 0)
          puntajA = puntajA + mv[i];
        else
          puntajB = puntajB + mv[i];
      }
      std::cout << puntajA << " " << puntajB << std::endl;

  }

  return 0;
}
