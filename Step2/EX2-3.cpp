#include <iostream>

using namespace std;

int main()
{
	int input, output = 0;

	cin >> input;

	if ((input % 4) == 0)
	{
		if ((input % 100) != 0)
			output = 1;
		else if ((input % 400) == 0)
			output = 1;
	}

	cout << output << endl;

	return 0;
}