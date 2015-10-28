#include <bits/stdc++.h>
using namespace std;

int map[103][103]

void init(){

  for(int i=0;i<103,i++){
    for(int j=0;j<103;j++){
      map[i][j]='#';
    }
  }
}

void show(){
  for(int i=0;i<103,i++){
    for(int j=0;j<103;j++){
      cout<<map[i][j];
    }
    cout<<endl;
  }
}

int main(){

  string str;
  while(cin>>str){
    init();
    bool E,O,N,S;
    int l =str.size();
    int row = 50;
    int colum = 0;
    map[row][colum]='.';
    E=true; O=N=S=false;
    for(int i=0;i<l;i++){
        char c = str[i];
        switch(c){
          case 'F':
                  if(E){colum++;E=true; O=N=S=false;}
                  if(O) {colum--;O=true; E=N=S=false;}
                  if(N) {row--;N=true; E=O=S=false;}
                  if(S) {row++;S=true; E=N=O=false;}
                  map[row][colum]='.'
                  break;
          case 'B':
                  if(E){colum++;E=true; O=N=S=false;}
                  if(O){colum--;O=true; E=N=S=false;}
                  if(N){row--;N=true; E=O=S=false;}
                  if(S){row++;S=true; E=N=O=false;}
                  map[row][colum]='.'
                  break;
          case 'R':

          case 'l':
        }
    }
  }
  return 0;
}
