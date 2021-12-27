#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> A;
	vector<int> out;
	int N, M, tmp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tmp);
		A.push_back(tmp);
	}

	sort(A.begin(), A.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		scanf("%d", &tmp);
		if (binary_search(A.begin(), A.end(), tmp))
			out.push_back(1);
		else
			out.push_back(0);
	}

	for (int i = 0; i < M; i++)
		printf("%d\n", out[i]);

	return 0;
}