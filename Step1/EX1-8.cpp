#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	cin >> a >> b;

	cout.precision(10);
	cout << (double)a / b << endl;

	return 0;
}