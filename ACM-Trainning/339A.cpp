#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string word;
  while(getline(std::cin,word)){
    std::vector<char> numbers;
    for (size_t i = 0; i < word.size(); i+=2) {
      numbers.push_back(word[i]);
    }
    std::sort(numbers.begin(),numbers.begin()+numbers.size());
    long long cont = 0;
    for (size_t i = 0; i < numbers.size()-1; i++) {
      std::cout << numbers[i] << "+";
      cont++;
    }
    std::cout << numbers[cont] << std::endl;
  }
  return 0;
}
