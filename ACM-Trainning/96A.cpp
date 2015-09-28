#include <bits/stdc++.h>

bool operation(std::string word)
{
  long long cont0 = 0;
  long long cont1 = 0;
  for (size_t i = 0; i < word.size(); i++) {
    long long a = word[i];
    a = a - 48;
    if(a == 0)
    {
      cont1 = 0;
      cont0++;
      if(cont0 == 7)
      {
        return true;
      }
    }
    if(a == 1)
    {
      cont0 = 0;
      cont1++;
      if(cont1 == 7)
      {
        return true;
      }
    }
  }
  return false;
}


int main(int argc, char const *argv[]) {
  std::string word;
  std::cin >> word;
  bool result  =  operation(word);
  if(result)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
  return 0;
}
