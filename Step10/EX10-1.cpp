#include <iostream>

using namespace std;

int FACTORIAL(int n)
{
	if (n == 0)
		return 1;

	return FACTORIAL(n - 1) * n;
}

int main()
{
	int N;

	cin >> N;

	cout << FACTORIAL(N) << endl;

	return 0;
}