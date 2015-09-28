#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool NearlyLuckyNumber(string m){
  ll sizeOfNumber = m.size();
  vector<ll>mv;
  for(ll i = 0; i < m.size(); i++){
    int k = 0;
    if(m[i] == '4'){
      k = 4;
      mv.push_back(k);
    }
    if(m[i] == '7'){
      k = 7;
      mv.push_back(7);
    }
  }
  vector<ll>mv2;
  ll sizeOfLucky = mv.size();
  while(sizeOfLucky != 0)
  {
    ll buffer = sizeOfLucky%10;
    mv2.push_back(buffer);
    sizeOfLucky = sizeOfLucky/10;
  }
  ll cont = 0;
  for( ll i = 0; i < mv2.size(); i++ )
  {
    if(mv2[i] != 4 && mv2[i] != 7)
      cont++;
  }
  ll idk = mv2.size();
  if(idk == 0)
    return false;
  if(cont != 0)
    return false;
  else
    return true;
}

int main(){
  string m;
  cin>>m;
  if(NearlyLuckyNumber(m))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
