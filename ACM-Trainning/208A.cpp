#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string word;
  std::cin >> word;
  std::vector<char> v;
  long long cont = 0;
  for( int i = 0; i < word.size(); i++ )
  {
    if(word[i]== 'W' and word[i+1] == 'U' and word[i+2]=='B')
        {
          i = i + 2;
          if(v.size() != 0)
          {
              v.push_back(' ');
          }

        }
    else
        v.push_back(word[i]);
  }
  for( int i = 0; i < v.size(); i++ )
    {
        std::cout << v[i] ;
    }
  std::cout << std::endl;

  return 0;
}
