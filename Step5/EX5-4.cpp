#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N = 10;
	vector<int> v;
	int num;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		auto it = find(v.begin(), v.end(), num % 42);

		if (it == v.end())
			v.push_back(num % 42);
	}

	cout << v.size() << endl;

	return 0;
}