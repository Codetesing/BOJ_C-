#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int x; cin >> x;

	int start = 0, end = n - 1, cnt = 0;

	while (start < end)
	{
		int value = v[start] + v[end];

		if (value > x)
			end--;
		else if (value < x)
			start++;
		else
		{
			start++;
			end--;
			cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}