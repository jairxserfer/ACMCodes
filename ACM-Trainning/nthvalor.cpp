#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int cont = 1;
  while(n--){
    int a;
    std::cin >> a;
    std::vector<int> mv;
    for(int i = 0; i < 10; i++)
    {
      int b;
      std::cin >> b;
      mv.push_back(b);
    }
    sort(mv.begin(), mv.end());
    reverse(mv.begin(),mv.end());

    std::cout <<cont<<" "<< mv[2] << std::endl;
    cont++;
  }
  return 0;
}
