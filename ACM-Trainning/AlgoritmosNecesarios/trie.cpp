#include <bits/stdc++.h>
#define MAXN 500000
using namespace std;

struct trie{
  map<char, int> sig;
  bool final;
};

trie t[MAXN];
int n;

void init(){
  n = 1;
  t[0].sig.clear();
  t[0].final = false;
}

void insertar(){
  int pos = 0;
  for (int i = 0; i < st.size(); i++)
  {
    if( trie[pos].sig.find(st[i]) == trie[pos].sig.end())
    {
      trie[pos].sig[st[i]] = n;
      trie[n].sig.clear();
      trie[n].final = false;
      n++
    }
    pos = trie[pos].sig[st[i]];
  }
    trie[pos].final = true;
}

int main(){

  return 0;
}
