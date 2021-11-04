#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int C, N, num;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		cin >> N;

		int sum = 0;
		int count = 0;
		vector<int> v;

		for (int j = 0; j < N; j++)
		{
			cin >> num;
			v.push_back(num);
			sum += num;
		}

		float eval = sum / (float)N;

		for (int i : v)
			if (eval < i)
				count++;

		cout << fixed;
		cout.precision(3);
		cout << (count / (float)N) * 100<< '%' << endl;
	}

	return 0;
}