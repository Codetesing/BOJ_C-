#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main()
{
	queue<int> q;
	char in[100];
	int N, X, out;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", in);

		if (!strcmp(in, "push"))
		{
			scanf("%d", &X);
			q.push(X);
		}

		else if (!strcmp(in, "pop"))
		{
			if (q.empty())
				out = -1;
			else
			{
				out = q.front();
				q.pop();
			}
			printf("%d\n", out);
		}

		else if (!strcmp(in, "size"))
		{
			out = q.size();
			printf("%d\n", out);
		}

		else if (!strcmp(in, "empty"))
		{
			if (q.empty())
				out = 1;
			else
				out = 0;
			printf("%d\n", out);
		}

		else if (!strcmp(in, "front"))
		{
			if (q.empty())
				out = -1;
			else
				out = q.front();
			printf("%d\n", out);
		}
		else if (!strcmp(in, "back"))
		{
			if (q.empty())
				out = -1;
			else
				out = q.back();
			printf("%d\n", out);
		}
	}

	return 0;
}