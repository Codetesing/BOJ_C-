#include <stdio.h>
#include <stdlib.h>

int K = 0, N = 0;

long long int MAX(int* arr)
{
	int tmp = arr[0];

	for (int i = 1; i < K; i++)
		if (tmp < arr[i])
			tmp = arr[i];

	return tmp;
}

long long int CUT(int* lan, long long int start, long long int end)
{
	long long int tmp = 0;
	long long int mid = 0;

	mid = (start + end) / 2;

	if (start > end)
		return mid;

	for (int i = 0; i < K; i++)
		tmp += lan[i] / mid;

	if (tmp < N)
		return CUT(lan, start, mid - 1);

	else
		return CUT(lan, mid + 1, end);
}

int main()
{
	int* LAN = NULL;
	long long int tmp = 0;

	scanf("%d %d", &K, &N);

	LAN = (int*)malloc(K * sizeof(int));
	for (int i = 0; i < K; i++)
		scanf("%d", &LAN[i]);

	tmp = MAX(LAN);
	tmp = CUT(LAN, 1, tmp);

	printf("%lld\n", tmp);

	free(LAN);

	return 0;
}