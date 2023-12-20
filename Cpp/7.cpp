#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>

#define ll long long
#define million 1000000

using namespace std;

/*
 * 7 - 10001st Prime
 */

bool isPrime(ll n);

int main()
{
	vector<int> primeNumbers;
	for(int i = 2; primeNumbers.size() < 10001; i++)
	{
		if(isPrime(i)) primeNumbers.push_back(i);
	}

	cout << primeNumbers[10000];
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
