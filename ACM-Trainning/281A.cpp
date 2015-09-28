#include <bits/stdc++.h>

std::string Capitalization(std::string word)
{
  int buffer = word[0];
  if(buffer >= 97 and buffer <= 122)
  {
    buffer = buffer -32;
  }
  word[0] = buffer;
  return word;
}

int main(int argc, char const *argv[]) {
  std::string word;
  std::cin >> word;
  std::string solution = Capitalization(word);
  std::cout << solution << std::endl;
  return 0;
}
