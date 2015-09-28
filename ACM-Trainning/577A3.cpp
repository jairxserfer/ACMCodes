#include <bits/stdc++.h>
#define  ll long long
#define MAX 100001

using  namespace std;
vector<bool> is_prime(10000001);
void sieve_atkins(ll int n)
{

    is_prime[2] = true;
    is_prime[3] = true;
    for (ll int i = 5; i <= n; i++)
    {
        is_prime[i] = false;
    }
    ll int lim = ceil(sqrt(n));
    for (ll int x = 1; x <= lim; x++)
    {
        for (ll int y = 1; y <= lim; y++)
        {
            ll int num = (4 * x * x + y * y);
            if (num <= n && (num % 12 == 1 || num % 12 == 5))
            {
                is_prime[num] = true;
            }
            num = (3 * x * x + y * y);
            if (num <= n && (num % 12 == 7))
            {
                is_prime[num] = true;
            }

            if (x > y)
            {
                num = (3 * x * x - y * y);
                if (num <= n && (num % 12 == 11))
                {
                    is_prime[num] = true;
                }
            }
        }
    }
    for (ll int i = 5; i <= lim; i++)
    {
        if (is_prime[i])
        {
            for (ll int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }


}

ll solution(ll size, ll number){
  ll  cont = 0;
  if(number == 1 || size == 1)
  {
    if(number == 1 && size == 1)
      return 1;
    if(number == 1 && size != 1)
      return 0;
  }
  if(is_prime[number] && number > size)
    return 0;
  for(int i = 1 ; i < size; i++)
  {
    if(number % i == 0)
    {
      if(i == 1 && number != 1) cont = 0;
      cont++;
    }
  }
  return cont;
}


int main(){

  ll  size, number;
  ll aleards = 10000000;
  sieve_atkins(aleards);
  cin>>size>>number;
  cout<<solution(size,number)<<endl;
  return 0;
}
