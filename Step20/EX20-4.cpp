#include <iostream>

using namespace std;

int DNC(int a, int b, int c)
{
	if (b == 1)
		return a % c;

	long long mult = DNC(a, b / 2, c);

	if ((b % 2) == 0)
		return mult % c * mult % c;

	else
		return mult % c * mult % c * (a % c) % c;
}

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	cout << DNC(A, B, C) << endl;

	return 0;
}