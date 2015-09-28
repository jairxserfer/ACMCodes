#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll InsomniaCure(ll k, ll l, ll m, ll n, ll numberOfDragons){
  bool mv[numberOfDragons+1];
  ll cont = 0;

  for( ll i = 0; i <= numberOfDragons; i++  ) mv[i] = false;
  for( ll i = k; i <= numberOfDragons; i+=k ) mv[i] = true;
  for( ll i = l; i <= numberOfDragons; i+=l ) mv[i] = true;
  for( ll i = m; i <= numberOfDragons; i+=m ) mv[i] = true;
  for( ll i = n; i <= numberOfDragons; i+=n ) mv[i] = true;

  for( ll i = 0; i <= numberOfDragons; i++){
    if(mv[i]){
      cont++;
    }
  }

  return cont;
}


int main(){
  ll k, l, m ,n , numberOfDragons;
  cin>>k>>l>>m>>n>>numberOfDragons;
  cout<<InsomniaCure(k,l,m,n,numberOfDragons)<<endl;
  return 0;
}
