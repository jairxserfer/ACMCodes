#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll t;
  ll cont;
  cin>>t;
  while(t--){
    ll a, b;
    cin>>a>>b;
    if(b-a >= 2)
      cont++;
  }
  cout<<cont<<endl;
  return 0;
}
