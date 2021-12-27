#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> bitonic;

void BIN_SEARCH(int n)
{
	int start = 0;
	int end = bitonic.size() - 1;
	int mid;
	int ind = bitonic.size() - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;

		if (bitonic[mid] >= n)
		{
			if (ind > mid)
				ind = mid;
			end = mid - 1;
		}
		else
			start = mid + 1;
	}

	bitonic[ind] = n;
}

int main()
{
	int N;

	cin >> N;
	
	int* arr = new int[N];

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	bitonic.push_back(arr[0]);
	
	for (int i = 1; i < N; i++)
	{
		if (bitonic.back() < arr[i])
			bitonic.push_back(arr[i]);
		else
			BIN_SEARCH(arr[i]);
	}

	cout << bitonic.size() << endl;

	return 0;
}
