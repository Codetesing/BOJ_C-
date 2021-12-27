#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	long long int* arr = new long long int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	long long int low = 0;
	long long int high = arr[N - 1];
	long long int answer = -1;

	while (low <= high)
	{
		long long int mid = (low + high) / 2;
		long long int sum = 0;

		for (int i = 0; i < N; i++)
			if (mid < arr[i])
				sum += arr[i] - mid;

		if (sum >= M)
		{
			if (answer < mid)
				answer = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}

	cout << answer << endl;

	return 0;
}