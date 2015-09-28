#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[]) {
  vector<ll> mv;
  ll a, b;
  while(cin>>a>>b){
    if(a == 0 and b == 0) break;
    mv.push_back(a);
    while(b--){
      ll c, d;
      cin>>c>>d;
      mv.push_back(c); mv.push_back(d);
      ll buffer = mv.size()/2;
      buffer = buffer+1;
      sort(mv.begin(), mv.end());
      cout<< mv[buffer-1]<<" ";
    }
      cout<<endl;
  }


  return 0;
}
