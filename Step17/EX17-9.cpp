#include <iostream>
#include <cstring>

using namespace std;

int COEF(int** D, int n, int k)
{
	if (k == 0 || k == n)
		return D[n][k] = 1;

	if (D[n][k] != -1)
		return D[n][k];

	return D[n][k] = (COEF(D, n - 1, k) + COEF(D, n - 1, k - 1));
}

int main()
{
	int T, N, K;

	cin >> T;

	int** arr = new int* [30 + 1];
	for (int i = 0; i <= 30; i++)
		arr[i] = new int[30 + 1];

	for (int i = 0; i <= 30; i++)
		for (int j = 0; j <= 30; j++)
			arr[i][j] = -1;

	for (int i = 0; i < T; i++)
	{
		cin >> K >> N;

		if (arr[N][K] == -1)
			arr[N][K] = COEF(arr, N, K);

		cout << arr[N][K] << endl;
	}

	return 0;
}