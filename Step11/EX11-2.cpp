#include <iostream>

using namespace std;

int PARTIAL_SUM(int n)
{
	int sum = 0;

	for (int i = 10; n != 0; n /= i)
		sum += n % i;

	return sum;
}

int main()
{
	int N;
	int out = 0;

	cin >> N;

	for (int i = N - 1; i >= 1; i--)
		if (PARTIAL_SUM(i) + i == N)
			out = i;

	cout << out << endl;

	return 0;
}