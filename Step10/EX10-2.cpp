#include <iostream>

using namespace std;

int FIBONACCI(int n)
{
	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return FIBONACCI(n - 1) + FIBONACCI(n - 2);
}

int main()
{
	int N;

	cin >> N;

	cout << FIBONACCI(N) << endl;

	return 0;
}