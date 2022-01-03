#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct compare {
	bool operator()(int &a, int &b)
	{
		if (abs(a) == abs(b))
			return a > b;
		else
			return abs(a) > abs(b);
	}
};

int main()
{
	priority_queue <int, vector<int>, compare>pq;
	int N, in;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &in);

		if (in == 0)
		{
			if (pq.empty())
				printf("0\n");
			else
			{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else
			pq.push(in);
	}
	return 0;
}