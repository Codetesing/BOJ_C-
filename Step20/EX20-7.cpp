#define _CRT_SECURE_NO_WARNINGS

#define MOD 1000

#include <iostream>

using namespace std;

int ans[5][5];
int C[5][5];

void MAT_MULT(int** a, int n, int tok)
{
	if (tok == 1)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				int sum = 0;
				for (int k = 0; k < n; k++)
					sum += ans[i][k] * a[k][j];
				C[i][j] = sum % MOD;
			}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				ans[i][j] = C[i][j];
	}
	else if (tok == 2)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				int sum = 0;
				for (int k = 0; k < n; k++)
					sum += a[i][k] * a[k][j];
				C[i][j] = sum % MOD;
			}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = C[i][j];
	}
}

void DNC_MATMULT(int** arr, int n, long long b)
{
	if (b == 1)
		MAT_MULT(arr, n, 1);
	else if (b % 2 == 1)
	{
		MAT_MULT(arr, n, 1);
		MAT_MULT(arr, n, 2);
		DNC_MATMULT(arr, n, b / 2);
	}
	else
	{
		MAT_MULT(arr, n, 2);
		DNC_MATMULT(arr, n, b / 2);
	}
}

int main()
{
	int N;
	long long B;

	cin >> N >> B;

	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
			ans[i][j] = 0;
		}

	for (int i = 0; i < N; i++)
		ans[i][i] = 1;

	DNC_MATMULT(arr, N, B);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}

	return 0;
}