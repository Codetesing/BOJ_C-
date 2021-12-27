#define _CRT_SECURE_NO_WARNINGS

#define MAX 20000001

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int DP[MAX];

int compare(void* first, void* second) {
	if (*(int*)first > *(int*)second) return 1;
	else if (*(int*)first < *(int*)second) return -1;
	else return 0;
}
int UPPER(int low, int high, int* a, int x)
{
	int mid = 0;

	while (high > low)
	{
		mid = (low + high) / 2;
		if (a[mid] > x)
			high = mid;
		else low = mid + 1;
	}
	return high;

}

int LOWER(int low, int high, int* a, int x)
{
	int mid = 0;

	while (high > low)
	{
		mid = (low + high) / 2;
		if (a[mid] >= x)
			high = mid;
		else low = mid + 1;
	}
	return low;

}

int main()
{
	int N = 0, M = 0;
	int* A = NULL;
	int B = 0, tmp = 0;

	scanf("%d", &N);

	A = (int*)malloc((N) * sizeof(int));

	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);

	scanf("%d", &M);

	memset(DP, -1, sizeof(DP));

	qsort(A, N, sizeof(int), compare);
	//QUICK_SORT(0, N - 1, A);

	for (int i = 0; i < M; i++)
	{
		scanf("%d", &B);

		if (DP[B + 10000000] == -1)
			DP[B + 10000000] = UPPER(0, N, A, B) - LOWER(0, N, A, B);

		printf("%d\n", DP[B + 10000000]);
	}

	free(A);

	return 0;
}