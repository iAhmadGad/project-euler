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
 * 6 - Sum Square Difference
 *
 * Answer: 25164150
 */

int main()
{
	int sum = 0;
	for(int i = 1; i <= 100; i++) sum += i * i;

	int tempSum = 0;
	for(int i = 1; i <= 100; i++) tempSum += i;
	int square = tempSum * tempSum;

	cout << (square - sum);
}
