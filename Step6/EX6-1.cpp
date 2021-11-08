#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int>& a)
{
	long long sum = 0;

	for (auto& v : a)
		sum += v;

	return sum;
};