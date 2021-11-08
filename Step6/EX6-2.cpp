#include <iostream>
#include <vector>
#include <cstring>

#define N 10001

using namespace std;

void IS_DNUM(bool* d, int n)
{
	int sum = n;

	while (1)
	{
		for (int temp = sum; temp != 0; temp /= 10)
			sum += (temp % 10);

		if (sum >= N)
			break;

		d[sum] = false;
	}
}

int main()
{
	bool* DNUM = new bool[N];

	memset(DNUM, true, N * sizeof(bool));

	for (int i = 1; i < N; i++)
		if(DNUM[i])
			IS_DNUM(DNUM, i);

	for (int i = 1; i < N; i++)
		if (DNUM[i])
			cout << i << endl;

	return 0;
}