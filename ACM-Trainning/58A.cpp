#include <bits/stdc++.h>
using namespace std;
#define uld unsingned long long
#define ld long long
#define inf INT_MAX
#define pi 2*acos(0.0)
#define vi vector<int>
#define  vl vector<long long>
#define pdd pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define mdd map<int, int>
#define mod 1000000000
#define pf first
#define ps second
#define vsort(v) sort(v.begin(), v.end())
#define cas(a) printf("Case %d:",a)
#define pb push_back

int main()
{
        string hello="hello";
        string line;
        while(cin>>line)
        {
                bool ans=false;
                int len=line.length(),i,j,count=0;
                for(i=0;i<len;i++)
                {
                        if(line[i]==hello[count])
                        count++;
                        if(count==5)
                        {
                                ans=true;
                                break;
                        }
                }
                if(ans==true)
                cout<<"YES\n";
                else
                cout<<"NO\n";

        }
      return 0;
}
