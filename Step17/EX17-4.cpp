#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	int N, A, B;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &A, &B);

		int gcd = GCD(A, B);
		int lcm = (A * B) / gcd;

		cout << lcm << endl;
	}

	return 0;
}