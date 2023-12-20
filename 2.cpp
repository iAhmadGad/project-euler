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
 * 2 - Even Fibonacci Numbers
 */

int main()
{
	int sum = 2, first = 1, second = 2;
	for(int i = 3; i <= 4 * million; i = first + second)
	{
		if(i % 2 == 0) sum += i;
		first = second;
		second = i;
	}
	cout << sum;
	return 0;
}
