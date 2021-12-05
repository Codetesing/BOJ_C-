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
	int A, B;

	cin >> A >> B;

	int gcd = GCD(A, B);
	int lcm = (A * B) / gcd;

	cout << gcd << endl;
	cout << lcm << endl;

	return 0;
}