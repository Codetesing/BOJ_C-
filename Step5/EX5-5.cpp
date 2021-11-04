#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> v;
	int N;

	cin >> N;

	double num, sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
		sum += num;
	}

	double max = *max_element(v.begin(), v.end());

	cout << ((sum / max) * 100) / N << endl;

	return 0;
}