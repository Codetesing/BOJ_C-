#include <iostream>
#include <cstring>

using namespace std;

#define MAX 10000

int main()
{
	int T;
	int N;
	int temp;

	bool arr[MAX + 1];

	memset(arr, true, sizeof(arr));
	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i * i <= MAX; i++)
		if (arr[i])
			for (int j = 2; i * j <= MAX; j++)
				arr[i * j] = false;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		for (int i = 2; i <= N / 2; i++)
			if (arr[i] && arr[N - i])
				temp = i;

		printf("%d %d\n", temp, N - temp);
	}

	return 0;
}