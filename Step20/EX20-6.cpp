#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int N, M, K, sum;

	cin >> N >> M;
	int** A = new int* [N];
	for (int i = 0; i < N; i++)
		A[i] = new int[M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			scanf("%d", &A[i][j]);

	cin >> M >> K;
	int** B = new int* [M];
	for (int i = 0; i < M; i++)
		B[i] = new int[K];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < K; j++)
			scanf("%d", &B[i][j]);

	int** C = new int* [N];
	for (int i = 0; i < N; i++)
		C[i] = new int[K];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			sum = 0;
			for (int k = 0; k < M; k++)
				sum += A[i][k] * B[k][j];
			C[i][j] = sum;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}

	return 0;
}