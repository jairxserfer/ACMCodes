#include <bits/stdc++.h>
int enesimo(int P, int Q, int p, int s, int k)
{
  double valorR;
  double n = P/p; double m = Q/s;
  if(n == m)
  {
    valorR = p*(n-k)+s*(k-1);
    return valorR;
  } else
    return -1;

}
int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int P, Q,p, q ,k;
    std::cin >> P >> Q >> p >> q >> k ;
    int result = enesimo(P, Q, p, q, k);
    std::cout << result << std::endl;
  }
  return 0;
}
