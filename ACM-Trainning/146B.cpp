#include <bits/stdc++.h>

int finalOperation(int a, int b){
    int cont = 0;
    int bfinal = b;
    while(bfinal!=0)
    {
      bfinal = bfinal/10;
      cont++;
    }
    int buffer = 0;
    int x = a;
    for (size_t i = 0; i < cont; i++) {
      buffer = buffer +(x%10)*pow(10,i);
      x = x/10;
    }
    int retrs;
    if(buffer == 0)
    {
        retrs = a + b;
    } else {
        a = a - buffer;
        retrs = a + b;
    }
    return retrs;
}

int operacion(int a, int b){
  if(b > a)
  {
    return b;
  }  else{
      return finalOperation(a,b);
  }

}

int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a>>b;
  int result = operacion(a,b);
  std::cout << result << std::endl;
  return 0;
}
