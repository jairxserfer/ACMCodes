#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string word;
  std::string word2;
  std::cin >> word >> word2;
  std::vector<char> v;
  for (size_t i = 0; i < word.size(); i++) {
    char a;
    a = word[i];
    v.push_back(a);
  }
  reverse(v.begin(),v.end());
  long long count = 0;
  for (size_t i = 0; i < word2.size(); i++) {
    if(word2[i] == v[i]) count++;
  }
  long long tama = v.size();
  if(tama == count)
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;
}
