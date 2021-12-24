#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
	vector<int> dq;
	char in[100];
	int N, X, size = 0, out;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", in);

		if (!strcmp(in, "push_front"))
		{
			scanf("%d", &X);
			dq.insert(dq.begin(), X);
			size++;
		}

		else if (!strcmp(in, "push_back"))
		{
			scanf("%d", &X);
			dq.push_back(X);
			size++;
		}

		else if (!strcmp(in, "pop_front"))
		{
			if (size == 0)
				out = -1;
			else
			{
				out = dq[0];
				dq.erase(dq.begin());
				size--;
			}
			printf("%d\n", out);
		}

		else if (!strcmp(in, "pop_back"))
		{
			if (size == 0)
				out = -1;
			else
			{
				out = dq[--size];
				dq.erase(dq.begin() + size);
			}
			printf("%d\n", out);
		}

		else if (!strcmp(in, "size"))
			printf("%d\n", size);

		else if (!strcmp(in, "empty"))
		{
			if (size == 0)
				out = 1;
			else
				out = 0;

			printf("%d\n", out);
		}

		else if (!strcmp(in, "front"))
		{
			if (size == 0)
				out = -1;
			else
				out = dq[0];

			printf("%d\n", out);
		}

		else if (!strcmp(in, "back"))
		{
			if (size == 0)
				out = -1;
			else
				out = dq[size - 1];

			printf("%d\n", out);
		}
	}

	return 0;
}