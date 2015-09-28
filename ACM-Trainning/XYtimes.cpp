#include <bits/stdc++.h>
void k(long long  x, long long y)
{
  if(y > x && x > 1)
  {
    for(int i = 0; i < y; i++)
    {
      long long result = x*pow(10,i);
      std::cout<<result;
      if(i!= y-1)
      {
        std::cout<<" ";
      }
    }
    std::cout << std::endl;
  }

}

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while(t--)
  {
    long long x,y;
    std::cin >> x >> y;
    if( x == 1)
      std::cout << "1" << std::endl;
    else
    {

      k(x,y);
    }
  }
  return 0;
}
