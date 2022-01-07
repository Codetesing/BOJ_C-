#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int N; cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		scanf("%d", &v[i]);

	sort(v.begin(), v.end());

	int start = 0, end = N - 1, value = 2000000000, a, b;

	while (start < end)
	{
		int temp = v[start] + v[end];
		if (abs(temp) < value)
		{
			value = abs(temp);
			a = v[start];
			b = v[end];
		}

		if (temp == 0)
		{
			a = v[start];
			b = v[end];
			break;
		}
		else if (temp > 0)
			end--;
		else
			start++;
	}

	printf("%d %d\n", a, b);
	
	return 0;
}