#include <bits/stdc++.h>

bool trueSign(long long a, std::string signo, long long b)
{
  if(signo == "==")
  {
    if(a == b)
      return true;
    else
      return false;
  }
  if(signo == "!=")
  {
    if(a == b)
      return false;
    else
      return true;
  }
  if(signo == "<=")
  {
    if(a <= b)
      return true;
    else
      return false;
  }
  if(signo == ">=")
  {
    if(a >= b)
      return true;
    else
      return false;
  }
  if(signo == "<" )
  {
    if(a < b)
      return true;
    else
      return false;
  }

  if(signo == ">")
  {
    if(a < b)
      return true;
    else
      return false;
  }
}


int main(int argc, char const *argv[]) {
  long long t;
  std::cin >> t;
  while (t--) {
    long long a, b;
    std::string signo;
    std::cin >> a>> signo >> b;
    bool solution = trueSign(a,signo,b);
    if(solution)
      std::cout << "true" << std::endl;
    else
      std::cout << "false" << std::endl;
  }
  return 0;
}
