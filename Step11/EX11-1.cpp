#include <iostream>

using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int sum = 0;
	int temp;

	for(int i = 0; i < N - 2; i++)
		for(int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				temp = arr[i] + arr[j] + arr[k];
				if (temp <= M && M - temp < M - sum)
					sum = temp;
			}

	cout << sum << endl;

	return 0;
}