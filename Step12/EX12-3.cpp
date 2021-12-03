#include <iostream>

using namespace std;

int main()
{
	int N;
	int* arr = new int[10001];
	int temp;

	for (int i = 1; i <= 10001; i++)
		arr[i] = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i);

	return 0;
}