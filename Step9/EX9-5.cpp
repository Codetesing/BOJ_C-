#include <iostream>
#include <cstring>

#define MAX 123456

using namespace std;

int main()
{
	int N;

	bool arr[2 * MAX + 1];

	memset(arr, true, sizeof(arr));
	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i * i <= 2 * MAX; i++)
		if (arr[i])
			for (int j = 2; i * j <= 2 * MAX; j++)
				arr[i * j] = false;

	while (1)
	{
		cin >> N;
		int count = 0;

		if (N == 0)
			break;

		for (int i = N + 1; i <= 2 * N; i++)
			if (arr[i])
				count++;

		printf("%d\n", count);
	}
	return 0;
}