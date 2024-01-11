#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <chrono>
#include <iomanip>
#include <utility>
#include <bits/stdc++.h>

#define ll long long
#define million 1000000

using namespace std;

/*
 * 5 - Smallest Multiple
 */

bool isValid(int n);

int main()
{
	int num = 20;
	while(!isValid(num)) num += 20;
	cout << num;
	return 0;
}

bool isValid(int n)
{
	for(int i = 1; i <= 20; i++)
	{
		if(n % i != 0) return false;
	}
	return true;
}
