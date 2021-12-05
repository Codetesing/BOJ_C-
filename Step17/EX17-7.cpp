#include <iostream>

using namespace std;

int COEF(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else if (k > 0 && k < n)
		return COEF(n - 1, k - 1) + COEF(n - 1, k);
	else
		return 0;
}

int main()
{
	int N, K;

	cin >> N >> K;

	cout << COEF(N, K) << endl;

	return 0;
}