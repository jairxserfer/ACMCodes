#include <bits/stdc++.h>
using namespace std;

int mf[10];
void firts(){
  for (int i = 0; i < 10; ++i)
     mf[i] = i;
}

int find(int n) {
   if (mf[n] == n) return n;
   else return mf[n] = find(mf[n]);
}


int merge(int r1, int r2) {
   mf[r2] = r1;
}

int main(){
  firts();
  return 0;
}
