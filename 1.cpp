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

using namespace std;

/*
 * 1 - Multiples of 3 or 5
 */

int main()
{
	vector<int> nums;
	for(int i = 1; i < 1000; i++)
	{
		if(i % 3 == 0 || i % 5 == 0) nums.push_back(i);
	}
	auto sum = accumulate(nums.begin(), nums.end(), decltype(nums)::value_type(0));
	cout << sum;
  return 0;
}
