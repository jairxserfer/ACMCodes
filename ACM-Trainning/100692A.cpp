#include <bits/stdc++.h>
#define  MAX 101


int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    long long largo, ancho;
    std::cin >> largo >> ancho;
    char k[MAX][MAX];
    for (size_t i = 0; i < largo; i++) {
      for (size_t j = 0; j < ancho; j++) {
        std::cin >> k[i][j];
      }
    }

  }
  return 0;
}
