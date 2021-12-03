#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int N;
	int temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (const auto& i : v)
		cout << i << '\n';

	return 0;
}