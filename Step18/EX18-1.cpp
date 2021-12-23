#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
	int N;
	vector<int> stack;
	char com[10];
	int X, out;
	int top = -1;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%s", com);
		
		if (!strcmp(com, "push"))
		{
			scanf("%d", &X);
			stack.push_back(X);
			top++;
		}

		else if (!strcmp(com, "pop"))
		{
			if (top == -1)
				out = -1;
			else
			{
				out = stack[top--];
				stack.pop_back();
			}

			printf("%d\n", out);
		}

		else if (!strcmp(com, "size"))
			printf("%d\n", top + 1);

		else if (!strcmp(com, "empty"))
		{
			if (top == -1)
				out = 1;
			else
				out = 0;

			printf("%d\n", out);
		}

		else if (!strcmp(com, "top"))
		{
			if (top == -1)
				out = -1;
			else
				out = stack[top];

			printf("%d\n", out);
		}
	}

	return 0;
}