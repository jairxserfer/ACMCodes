#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		bool f=true;
		if(a>b){
			if(b<=96 && b>=3){
				cout<<"menguante"<<endl;
				f=false;
			}
		}
		if(f){
			if(b>=3 && b<=96){
				cout<<"creciente"<<endl;
			}else if(b>=97 && b<=100){
				cout<<"llena"<<endl;
			}else if(b>=0 && b<=2){
				cout<<"nueva"<<endl;
			}
		}
	}
	return 0;
}
