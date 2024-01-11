#include <iostream>

#define ll long long

using namespace std;

/*
 * 3 - Largest Prime Factor
 */

bool isPrime(ll n);

int main()
{
  ll n = 600851475143, f = n;
  while(!isPrime(f))
  {
    ll x = 2;
    while(!isPrime(x) || f % x != 0)
      x++;
    f /= x;
  }
  cout << f << endl;
  return 0;
}

bool isPrime(ll n) 
 { 
     if(n == 0 || n == 1) return false; 
     for(ll i = 2; i * i <= n; i++) 
     {
       if(n % i == 0) return false; 
     } 
     return true; 
 }
