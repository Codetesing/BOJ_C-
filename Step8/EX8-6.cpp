#include <iostream>

using namespace std;

int main()
{
	int T, k, n;

	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		cin >> k;
		cin >> n;

		int *cit = new int[n];

		for (int j = 0; j < n; j++)
			cit[j] = j + 1;

		for (int j = 1; j <= k; j++)
			for (int m = 1; m < n; m++)
				cit[m] = cit[m - 1] + cit[m];

		cout << cit[n - 1] << endl;
	}

	return 0;
}