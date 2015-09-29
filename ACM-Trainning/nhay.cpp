#include <bits/stdc++.h>
#define MAX 50000
using namespace std;
int kmp_table[MAX];
string s, t;
void fill_table(){
  int pos = 2, cnd = 0;
  kmp_table[0] = -1;
  kmp_table[1] = 0;
  while (pos < s.size()) {
    if (s[pos-1] == s[cnd]) {
      kmp_table[pos++] = ++cnd;
    } else{
      if(cnd > 0)
        cnd = kmp_table[cnd];
        else
          kmp_table[pos++] = 0;
    }

  }
}


int kmp(){
  fill_table();
  int  i = 0;
  int m = 0;
  while (m+i < t.size()) {
    if(s[i] == t[m+i])
    {
      if(i == s.size() - 1)
        return m;
      i++;
    } else{
      m  = m + i - kmp_table[i];
      if(kmp_table[i] > -1)
        i =  kmp_table[i];
      else
        i = 0;
    }
  }
  return -1;
}


int main(){
  int k;
  while(cin >> k)
  {
    cin >> s;
    cin >> t;
    if(kmp() == -1)
      cout << "\n";
    else
      cout << kmp()<<"\n";
  }
  return 0;
}
