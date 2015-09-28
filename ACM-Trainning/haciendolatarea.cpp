#include <bits/stdc++.h>
using namespace std;
vector<int> v_int(long long n){
    vector<int> v;
    while(n!=0){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    return v;
}

int iteracion_cant(long long n){
      int cit =0;
      while(n!=0){
           vector<int>input=v_int(n);
           vector<int> Rinput=input,result;
           sort(Rinput.begin(),Rinput.end());
           long long rni=0;
           for(int i=0;i<Rinput.size();i++){
               rni=10*rni + Rinput[i];
           }
           n-=rni;
           cit++;
      }
      return cit;

}

int main(){
        long long n;
        while(cin>>n){
            cout<<iteracion_cant(n)<<endl;
        }
}
