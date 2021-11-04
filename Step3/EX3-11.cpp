#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	int N, X;
	int temp;

	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp < X)
			vec.push_back(temp);
	}
	
	for (auto loop : vec)
		cout << loop << ' ';
	cout << endl;

	return 0;
}