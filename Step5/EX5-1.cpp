#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int N, num;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end()) << endl;

	return 0;
}