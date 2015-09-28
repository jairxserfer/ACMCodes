#include <bits/stdc++.h>
#define ll long long


using namespace std;

struct mv{
  ll x;
  ll y;
  ll r;
};

bool intersect_cir(mv c1,mv c2){
     double d = sqrt(pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2));
     double dr = c1.r+c2.r;
     if(d>dr)return false;
     else return true;
}


int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  vector <mv> xD;

  while(t--)
  {
    ll x, y, r;
    cin >> x >> y >> r;
    mv aux;
    aux.x=x;
    aux.y=y;
    aux.r=r;
    xD.push_back(aux);
  }
  vector<int> cont;
  for (size_t i = 0; i < xD.size(); i++) {
     int cc=0;
    for (size_t j = 0; j < xD.size(); j++) {
      if(i != j)
      {
        mv c1,c2;
        c1=xD[i],c2=xD[j];
        if(intersect_cir(c1,c2)){
          cc++;
        }
      }
    }
    cont.push_back(cc);
  }
  sort(cont.begin(),cont.end());
  cout<<cont[cont.size()-1]<<endl;
  return 0;
}
