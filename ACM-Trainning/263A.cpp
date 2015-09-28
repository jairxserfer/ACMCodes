#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[]) {
  ll matriz[5][5];
  ll bufferi = 0;
  ll bufferj = 0;
  for(int i = 0 ; i < 5; i++){
    for(int j = 0; j < 5; j++){
      cin>>matriz[i][j];
      if(matriz[i][j] == 1){
        bufferi = i; bufferj = j;
      }
    }
  }
  bufferi = bufferi + 1; bufferj = bufferj + 1;
  cout<<abs(3-bufferi)+abs(3-bufferj)<<endl;


  return 0;
}
