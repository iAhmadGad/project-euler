#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>

#define ll long long
#define MILLION 1000000

using namespace std;

/*
 * 10 - Summation of Primes
 */

bool isPrime(ll n);

int main()
{
        ll sum = 0;
	for(int i = 2; i < 2 * MILLION; i++)
	{
		if(isPrime(i)) sum += i;
	}

	cout << sum << endl;
	
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
