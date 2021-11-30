#include <iostream>

using namespace std;

int main()
{
	int X;
	int sum = 0;

	cin >> X;

	for (int diag = 1; ; diag++)
	{
		sum += diag;
		if (X <= sum)
		{
			if (diag % 2 == 1)
				cout << 1 + (sum - X) << '/' << diag - (sum - X) << endl;

			else
				cout << diag - (sum - X) << '/' << 1 + (sum - X) << endl;

			return 0;
		}
	}
}