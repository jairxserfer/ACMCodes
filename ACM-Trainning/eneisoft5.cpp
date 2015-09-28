#include <bits/stdc++.h>

int n;



int main(int argc, char const *argv[]) {
  std::cin >> n;
  int a[n+1][n+1];
  std::vector<int> v;
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 1; j <= n; j++) {
      std::cin >> a[i][j];
    }
  }
  int buffer = 0;
  n = n * 2;
  while(n--)
  {
    int k , j;
    std::cin >> k >> j;
    int z = a[k][j];
    if( z != buffer )
    {
      buffer = z;
      v.push_back(z);
    }
  }

  std::cout << v.size() << std::endl;
  return 0;
}
