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

	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());

	cout << min * max << endl;

	return 0;
}