#include <iostream>
#include <cstring>

using namespace std;

int COEF(int** D, int n, int k)
{
	if (k == 0 || k == n)
		return D[n][k] = 1;

	if (D[n][k] != -1)
		return D[n][k];

	return D[n][k] = (COEF(D, n - 1, k) + COEF(D, n - 1, k - 1)) % 10007;
}

int main()
{
	int N, K;

	cin >> N >> K;

	int** arr = new int*[N + 1];
	for (int i = 0; i <= N; i++)
		arr[i] = new int[N + 1];

	for (int i = 0; i <= N; i++)
		for (int j = 0; j <= N; j++)
			arr[i][j] = -1;

	cout << COEF(arr, N, K) << endl;

	return 0;
}