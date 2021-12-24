#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

#include <stdio.h>
#include <stdlib.h>

int imp[MAX];

int search(int num, int num2)
{
	for (int i = num2 + 1; i < num; i++)
		if (imp[num2] < imp[i])
			return 0;
	return 1;
}

int que(int n, int m)
{
	int temp = 0;
	int front = 0;
	int rear = n;
	int temp2 = imp[m];

	while (1)
	{
		if (search(n, front))
			front++;
		else
		{
			temp = imp[front];
			for (int i = front; i < rear - 1; i++)
				imp[i] = imp[i + 1];
			imp[rear - 1] = temp;
			if (m == front)
				m = n - 1;
			else
				m--;
		}
		if (front - 1 == m)
			break;
	}
	return front;
}

int main()
{
	int T = 0, N = 0, M = 0;

	scanf("%d", &T);

	for (int i = 0; i < MAX; i++)
		imp[i] = 0;

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);

		for (int k = 0; k < N; k++)
			scanf("%d", &imp[k]);

		printf("%d\n", que(N, M));
	}

	return 0;
}