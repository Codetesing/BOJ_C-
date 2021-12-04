#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<long long int> e;
	vector<long long int> w;
	long long int temp;

	cin >> N;

	for (int i = 0; i < N - 1; i++)
	{
		cin >> temp;
		w.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		e.push_back(temp);
	}
	long long int cur = e[0];
	long long sum = 0;
	for (int i = 1; i < N; i++)
	{
		if (cur > e[i])
		{
			sum += cur * w[i - 1];
			cur = e[i];
		}
		else
			sum += cur * w[i - 1];
	}

	cout << sum << endl;

	return 0;
}