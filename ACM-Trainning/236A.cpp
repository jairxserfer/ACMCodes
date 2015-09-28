#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll BoyOrGirl(string n){
  char buffer;
  vector<char>mv;
  sort(n.begin(),n.end());
  for(int i = 0; i < n.size();i++){
    if(n[i] != buffer)
    {
      buffer = n[i];
      mv.push_back(buffer);
    }
  }
  ll solution = mv.size();
  return solution;
}


int main(){
  string m;
  cin>>m;
  ll result = BoyOrGirl(m);
  if(result % 2 == 1)
    cout<<"IGNORE HIM!"<<endl;
  else
    cout<<"CHAT WITH HER!"<<endl;
  return 0;
}
