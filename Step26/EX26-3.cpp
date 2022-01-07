#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, S; cin >> N >> S;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		scanf("%d", &v[i]);

	int start = 0, end = 0, len = 0, sum = v[0];

	while (end < N)
	{
		if (sum >= S)
		{
			if (len == 0)
				len = end - start + 1;
			else
				if ((len > end - start + 1) && (end - start + 1 != 0))
					len = end - start + 1;

			sum -= v[start++];
		}
		else
		{
			if (end == N - 1)
				break;

			sum += v[++end];
		}
	}

	printf("%d\n", len);

	return 0;
}