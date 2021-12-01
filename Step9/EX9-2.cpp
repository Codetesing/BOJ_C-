#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool IS_PRIME(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main()
{
	int M, N;
	vector<int> v;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
		if (IS_PRIME(i))
			v.push_back(i);

	if (v.empty())
		cout << -1 << endl;

	else
	{
		int min = v[0];
		int sum = accumulate(v.begin(), v.end(), 0);

		cout << sum << endl;
		cout << min << endl;
	}

	return 0;
}