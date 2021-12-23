#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* stack = NULL;
char* oper = NULL;
int ind = 0;
int top = 0;

void push(int a)
{
	stack[top++] = a;
	oper[ind++] = '+';
}

void pop()
{
	top--;
	oper[ind++] = '-';
}

int main()
{
	int n = 0, num = 0;
	int tok = 1, k = 1;
	int* Input = NULL;

	scanf("%d", &n);
	stack = (int*)malloc(n * sizeof(int));
	oper = (char*)malloc(2 * n * sizeof(char));
	Input = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
		scanf("%d", &Input[i]);

	for (int i = 0; i < n; i++)
	{
		num = Input[i];
		if (num == stack[top - 1])
			pop();

		else
		{
			if (num < k)
			{
				tok = 0;
				break;
			}
			else
			{
				for (; k <= num; k++)
					push(k);
				pop();
			}
		}
	}

	if (tok == 0)
		printf("NO\n");
	else
		for (int i = 0; i < ind; i++)
			printf("%c\n", oper[i]);

	free(stack);
	free(oper);

	return 0;
}