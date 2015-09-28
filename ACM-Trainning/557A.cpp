#include <bits/stdc++.h>

using namespace std;



int main(){
	int n;
	int mv[3];
	cin>>n;

	int min1, max1;
	int min2, max2;
	int min3, max3;

	cin>>min1>>max1;
	cin>>min2>>max2;
	cin>>min3>>max3;
	if(n!= 0){
		int buffer = 0;
	do{
		buffer++;
		mv[0] = buffer;
		n--;
	} while(buffer < min1 );
	buffer = 0;

	do{
		buffer++;
		mv[1] = buffer;
		n--;
	} while(buffer < min2 ) ;
	buffer = 0;

	do{
		buffer++;
		mv[2] = buffer;
		n--;
	} while(buffer < min3 ) ;

	//cout<<n<<endl;
	int m1 = mv[0]; int m2 = mv[1]; int m3 = mv[2];
	//cout<<m1<<" "<<m2<<" "<<m3<<endl;
	do{
		if(m1 < max1){
			if( n == 0 ) break;
			m1++;
			mv[0] = m1;
			n--;
			//cout<<n<<endl;
			//cout<<mv[0]<<endl;
		}
		if(m2 < max2){
			if( n == 0 ) break;
			m2++;
			mv[1] = m2;
			n--;
			//cout<<n<<endl;
			//cout<<mv[1]<<endl;
		}
		if(m3 < max3){
			if( n == 0 ) break;
			m3++;
			mv[2] = m3;
			n--;
			//cout<<n<<endl;
			//cout<<mv[2]<<endl;
		}
		} while(n!=0);
	//cout<<n<<endl;
		cout<<mv[0]<<" "<<mv[1]<<" "<<mv[2]<<endl;
	} else{
		cout<<"0 0 0"<<endl;
	}

	return 0;
}
