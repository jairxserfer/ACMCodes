#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[]) {
  ll cont = 0, cont2 = 0, cont3 = 0;
  ll t;
  cin>>t;
  while(t--)
  {
    ll x, y , z;
    cin >> x >> y >> z;
    cont = cont + x;
    cont2 = cont2 + y;
    cont3 = cont3 + z;
  }
  if(cont  == 0 && cont2 == 0 && cont3 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
