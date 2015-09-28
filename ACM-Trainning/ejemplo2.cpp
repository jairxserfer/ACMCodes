#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string k;
  int cont = 0;
  getline(cin,k);
  int i = 0;
  int size = k.size();
  int cont2 = 0;
  int buffer = 0;
  while(size--){
    char m = k[i];
    cont++;
    if(m == ' ')
    {
      if(cont > cont2)
      {
          buffer = i;
          cont2 = cont - 1;
      }
        cont = 0;
    }
    i++;
  }
  int buffer2 = buffer - cont2;
  for(int i = buffer2; i < cont2; i++){
    cout<<k[i];
  }
  cout<<endl;
  cout<<cont2<<"Posicion "<<buffer<<endl;
  return 0;
}
