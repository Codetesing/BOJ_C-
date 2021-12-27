#include <iostream>
#include <algorithm>

using namespace std;

long long min(long long a, long long b)
{
	if (a < b)
		return a;
	return b;
}

long long mat_num(long long a, long long n)
{
	long long sum = 0;

	for (int i = 1; i <= n; i++)
		sum += min(a / i, n);

	return sum;
}

int main()
{
	long long N, k;

	cin >> N;
	cin >> k;

	long long low = 1;
	long long high = N * N;

	while (low <= high)
	{
		long long mid = (low + high) / 2;

		if (mat_num(mid, N) >= k)
			high = mid - 1;
		else
			low = mid + 1;
	}

	cout << low << endl;

	return 0;
}