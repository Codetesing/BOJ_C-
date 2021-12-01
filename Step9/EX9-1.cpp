#include <iostream>
#include <vector>

using namespace std;

bool IS_PRIME(int N)
{
	if (N == 1)
		return false;

	for (int i = 2; i < N; i++)
		if (N % i == 0)
			return false;

	return true;
}

int main()
{
	int N;
	int out = 0;

	cin >> N;

	int *arr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
		if (IS_PRIME(arr[i]))
			out++;

	cout << out << endl;

	return 0;
}