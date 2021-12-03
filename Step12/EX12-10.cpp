#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector<int> v;
	vector<int> temp;
	int tmp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
		temp.push_back(tmp);
	}

	sort(temp.begin(), temp.end());
	temp.erase(unique(temp.begin(), temp.end()), temp.end());

	for (const auto& i : v)
	{
		int out = lower_bound(temp.begin(), temp.end(), i) - temp.begin();
		printf("%d ", out);
	}
	printf("\n");

	return 0;
}