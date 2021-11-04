#include <iostream>

using namespace std;

int main()
{
	int x, y, output;

	cin >> x >> y;

	if (x > 0 && y > 0)
		output = 1;
	else if (x < 0 && y > 0)
		output = 2;
	else if (x < 0 && y < 0)
		output = 3;
	else
		output = 4;

	cout << output << endl;

	return 0;
}