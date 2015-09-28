#include <bits/stdc++.h>
#define MAX 100001


void criba(bool m[], int tam){
    m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i)
        m[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }
}


long long divisoresO(std::vector<long long> v, long long number, long long size){
  long long cont = 0;
  bool m[MAX];
  criba(m,MAX);

  for (size_t i = 1; i < number; i++) {
    if(number % i == 0)
      v.push_back(true);
    else v.push_back(false);
  }
  for (size_t i = 0; i < size; i++) {
    if(v[i])
      cont++;
  }
  if(size < number)
  {
    if(m[number])
      return 0;
    else
      return cont - 1;
  }
  return cont;
}



int main(int argc, char const *argv[]) {
  long long a, b;
  std::vector<long long> v;
  std::cin >> a >> b;
  long long result = divisoresO(v,b,a);
  std::cout << result << std::endl;
  return 0;
}
