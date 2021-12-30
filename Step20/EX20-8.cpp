#define MOD 1000000007

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<long long>> matrix_2D;

matrix_2D operator * (matrix_2D& a, matrix_2D& b)
{
	matrix_2D c(2, vector<long long>(2));

	for(int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < 2; k++)
				c[i][j] += a[i][k] * b[k][j];
			c[i][j] %= MOD;
		}
	return c;
}

int main()
{
	long long N;
	cin >> N;

	matrix_2D ans = { {1, 0}, {0, 1} };
	matrix_2D tmp = { {1, 1}, {1, 0} };

	while (N > 0)
	{
		if (N % 2 == 1)
			ans = ans * tmp;
		tmp = tmp * tmp;
		N /= 2;
	}

	cout << ans[0][1] << '\n';
}