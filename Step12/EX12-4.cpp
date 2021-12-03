#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector<int> v;
	int arr[8002] = { 0 };

	cin >> N;

	int temp;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		sum += temp;
		arr[temp + 4001]++;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	printf("%.0lf\n", (double)sum / N);
	printf("%d\n", v[N / 2]);
	
	int max = *max_element(arr, arr + 8002);
	int max_ind = max_element(arr, arr + 8002) - arr;
	
	for(int i = 0; i < 8002; i++)
		if (max == arr[i] && max_ind != i)
		{
			max_ind = i;
			break;
		}
	printf("%d\n", max_ind - 4001);
	printf("%d\n", v[N - 1] - v[0]);

	return 0;
}