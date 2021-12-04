#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	int temp;
	int out = 0;
	vector<int> v;
	
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		v.push_back(temp);
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (K >= v[i])
		{
			while (K >= v[i])
			{
				K -= v[i];
				out++;
			}
		}
	}

	cout << out << endl;

	return 0;
}