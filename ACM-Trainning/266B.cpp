#include <bits/stdc++.h>
#define ll long long
using namespace std;

void result(char mv[], ll sec, ll pos){
  while(sec--)
  {
    for(int i = 1 ; i < pos; i++)
    {
      if(mv[i] == 'G' and mv[i-1] == 'B')
      {
        char buffer;
        buffer = mv[i];
        mv[i] = mv[i-1];
        mv[i-1] = buffer;
        i++;
      }
    }
  }

  for(int i = 0; i < pos; i++)
  {
    cout<<mv[i];
  }
  cout<<endl;
}



int main(int argc, char const *argv[]) {


  ll pos, sec;
  string word;
  cin >> pos >> sec;
  char mv[pos];
  cin>>word;
  for(int i = 0; i < word.size(); i++)
  {
    char bufferz = word[i];
    mv[i] = word[i];
  }

  result(mv,sec, pos);

  return 0;
}
