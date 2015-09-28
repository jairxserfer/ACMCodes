#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while ( t-- ) {
    int n;
    std::cin >> n;
    int result = (n*(n+1)*((2*n)+1))/6;
    std::cout << result << std::endl;

  }
  return 0;
}
