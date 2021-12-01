#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int M, N;

	cin >> M >> N;

	bool* arr = new bool[N + 1];

	//memset(arr, true, sizeof(arr));

	arr[0] = false;
	arr[1] = false;

	for (int i = 2; i <= N; i++)
		arr[i] = true;

	for (int i = 2; i * i <= N; i++)
		if (arr[i])
			for (int j = 2; i * j <= N; j++)
				arr[i * j] = false;

	for (int i = M; i <= N; i++)
		if (arr[i])
			printf("%d\n", i);
			//cout << i << endl;

	return 0;
}