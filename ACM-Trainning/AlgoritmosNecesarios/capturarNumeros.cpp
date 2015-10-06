#include <bits/stdc++.h>
using namespace std;

vector<int> numeros(string word){
  vector<int> mv;
  for ( int i = 0; i < word.size(); i++){
    if(word[i] != ' ')
    {
        mv.push_back(word[i]);
    } else
    {
      int buffer = 0;
      for(int j = 0; j < mv.size(); j++)
      {
        int a = mv[i];
        a = a - 48;
        buffer = buffer + (a*pow(10,i));
      }
      mv.push_back(buffer);
    }
  }
  return mv;
}


int main(){

  return 0;
}
