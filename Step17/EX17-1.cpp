#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main()
{
	int A, B;

	while (1)
	{
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0)
			return 0;

		if (B % A == 0)
			printf("factor\n");

		else if (A % B == 0)
			printf("multiple\n");

		else
			printf("neither\n");
	}
}