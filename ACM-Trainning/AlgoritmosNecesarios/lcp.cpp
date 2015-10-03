#include <bits/stdc++.h>
using namespace std;

string st;
vector<int> sa[18];
vector<int> bucket[18];
int t, n;
void init(){
  n = st.size();
  for( int i = 0; (1<<i)<2*n; i++ ){
      sa[i].reside(n);
      bucket[i].reside(n);
      for( int j = 0; j < n; j++)
        sa[i][j] = j;
  }
  sort(sa[0].begin(); sa[0].end(); comp1);
  initBuckets();
  for( t = 0; (1<<t)<n; t++){
    sort(sa[t+1].begin(); sa[t+1].end(); comp2);
    sortBuckets();
  }
}

bool comp1( int a, int b)
{
    if(st[a] != st[b])
      return st[a] < st[b];
    return a<b;
}

bool comp2(int a, int b)
{
  if(bucket[t][a] != bucket[t][b])
    return bucket[t][a] < bucket[t][b];
  int d = (1<<t);
  if(a+d >= n)
    return true;
  if(b+d >= n)
    return false;
  if(bucket[t][a+d] != bucket[t][b+d])
    return bucket[t][a+d] != bucket[t][b+d];
  return a < b;
}

void initBuckets(){
  bucket[0][sa[0][0]] = 0;
  for(int i  =  1;  i < n; i++)
  if(st[sa[0][i]] == st[sa[0][i-1]])
    bucket[0][sa[0][i]] = bucket[0][sa[0]-[i-1]];
  else
    bucket[0][sa[0][i]] = i;
}

void sortBuckets(){
  bucket[t+1][sa[t+1][0]] = 0;
  int d = (1<<t);
  for(int i = 1; i < n; i++)
    if(bucket[t][sa[t+1][i]] == bucket[t][sa[t+1][i-1]]
     && sa[t+1][i] +d < n && sa[t+1][i-1] < ns
     && bucket[t][sa[t+1][i]+d] == bucket[t][sa[t+1][i-1]+d])
     bucket[t+1][sa[t+1][i]] =  bucket[t+1][sa[t+1][i-1]];
    else
      bucket[t+1][sa[t+1][i]] = i;
}


vector<int> lcp;
void llenarLCP(){
  int n = st.size();
  lcp.resize(n-1);
  int q=0,j;
  for(int i = 0; i < n; i++)
  if(bucket[t][i] != 0)
  {
    j = sa[t][bucket[t][i]-1];
    while(q+max(i,j) < n && st[i+q] == st[j+q])
      q++;
    lcp[bucket[t][i]-1] = q;
    if(q > 0)
      q--;
  }
}

int main(){
  return 0;
}
