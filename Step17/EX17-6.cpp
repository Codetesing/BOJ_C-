#include <iostream>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int N, M;
	int temp;
	vector<int> v;

	cin >> N;
	cin >> M;

	for (int i = 1; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < N - 1; i++)
	{
		int gcd = GCD(M, v[i]);
		printf("%d/%d\n", M / gcd, v[i] / gcd);
	}

	return 0;
}