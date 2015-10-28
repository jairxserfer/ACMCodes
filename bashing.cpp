#include <bits/stdc++.h>
using namespace std;

void result(int numberofCases, int limitTime){
  vector<int> mv(3);
  for( int i = 0; i < numberofCases; i++ )
  {
    cin >> mv[i];
  }
  long long buffer = 3601;
  int cont = 0;
  while(buffer != 0){
    for( int i = 0; i < numberofCases; i++ )
    {
      if(buffer > limitTime - mv[i] )
        buffer = limitTime - mv[i];
    }
    limitTime = buffer;
    cont ++;
  }
  cout << cont << endl;
}



int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  while( t -- )
  {
      int numberofCases, limitTime;
      cin >> numberofCases >> limitTime;
      result(numberofCases,limitTime);
  }
  return 0;
}
