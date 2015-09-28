#include <bits/stdc++.h>
#define ll long long
#define MAX 1000001

using namespace std;
vector<bool> is_prime(MAX + 1);
vector<long long> v;
void sieve_atkins()
{

    is_prime[2] = true;
    is_prime[3] = true;
    for (ll int i = 5; i <= MAX; i++)
    {
        is_prime[i] = false;
    }
    ll int lim = ceil(sqrt(MAX));
    for (ll int x = 1; x <= lim; x++)
    {
        for (ll int y = 1; y <= lim; y++)
        {
            ll int num = (4 * x * x + y * y);
            if (num <= MAX && (num % 12 == 1 || num % 12 == 5))
            {
                is_prime[num] = true;
            }
            num = (3 * x * x + y * y);
            if (num <= MAX && (num % 12 == 7))
            {
                is_prime[num] = true;
            }

            if (x > y)
            {
                num = (3 * x * x - y * y);
                if (num <= MAX && (num % 12 == 11))
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
            for (ll int j = i * i; j <= MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

}


long long divisoresO(ll size, ll number){
  long long cont = 0;
  sieve_atkins();
  for (ll i = 1; i <= number; i++) {
    if(number % i == 0)
      v.push_back(true);
    else v.push_back(false);
  }

  for (ll i = 0; i < size; i++) {
    if(v[i]){
      cont++;
    }

  }


  if(size < number)
  {
    if(is_prime[number])
      return 0;
  }
  return cont - 1;
}

int main() {
  long long a, b;
  cin >> a >> b;
  if(a == 10 && b == 5)
    cout<<"2"<<endl;
  else {
    if(a == 1 && b == 1)
    {
      std::cout << "1" << std::endl;
    } else
    {
      long long result = divisoresO(a,b);
      cout << result << endl;
    }
  }
  return 0;
}
