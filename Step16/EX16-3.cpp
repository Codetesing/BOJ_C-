#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector<int> P;
	int temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		P.push_back(temp);
	}

	sort(P.begin(), P.end());

	int time = 0;

	for (int i = 0; i < N; i++)
	{
		time += P[0] * P.size();
		P.erase(P.begin(), P.begin() + 1);
	}

	cout << time << endl;

	return 0;
}