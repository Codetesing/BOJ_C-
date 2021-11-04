#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int num, N = 9;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	int max = *max_element(v.begin(), v.end());

	int max_index = max_element(v.begin(), v.end()) - v.begin();

	cout << max << endl;
	cout << max_index + 1 << endl;

	return 0;
}