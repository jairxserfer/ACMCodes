#include <bits/stdc++.h>

using namespace std;

int charToInt(char k){
  int z = k;
  z = z - 48;
  return z;
}

vector<char> Suma(string a, string b){
  long long sizeF;
  vector<char> result;
  if(a.size() > b.size())
    sizeF =a.size();
  else
    sizeF = b.size();
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int buffer = 0;
    for( int i = 0; i < sizeF; i++  )
    {
      int number1 = 0 , number2 = 0;
      if(i <= a.size()-1)
        number1 = charToInt(a[i]);
      if(i <= b.size()-1)
        number2 = charToInt(b[i]);
      int sum = number1 + number2 + buffer;
      if(sum > 9)
        buffer = 1;
      sum = sum % 10;
      result.push_back(sum + 48);
    }
  reverse(result.begin(), result.end());
  return result;
}


int main(){
  string a, b;
  cin >> a >> b;
  vector<char> result = Suma(a,b);
  for ( int i = 0; i < result.size(); i++){
    cout << result[i] ;
  }
    cout << endl;
  return 0;

}
