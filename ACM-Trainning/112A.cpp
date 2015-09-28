#include <bits/stdc++.h>

std::string Transformation(std::string word)
{
  for (size_t i = 0; i < word.size(); i++) {
    long long buffer;
    buffer = word[i];
    if(buffer >= 65 and buffer <= 90)
    {
      buffer = buffer + 32;
      char tempo = buffer;
      word[i] = tempo;
    }
  }
  return word;
}

long long comparation(std::string word1, std::string word2)
{
  std::string temp1 = Transformation(word1);
  std::string temp2 = Transformation(word2);
  if(temp1 == temp2)
    return 0;
  else
  {
    if(temp1 > temp2)
        return 1;
    else
        return -1;
  }
}

int main(int argc, char const *argv[]) {
  std::string word1;
  std::string word2;
  std::cin >> word1 >> word2;
  long long compare = comparation(word1,word2);
  std::cout << compare << std::endl;
  return 0;
}
