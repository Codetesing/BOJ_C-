#include <iostream>

using namespace std;

int main()
{
	int T;
	string in;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> in;

		int tok = 0, tmp = 0;
		int len = in.length();

		for (int i = 0; i < len; i++)
		{
			if (in[i] == '(')
				tok++;
			else
			{
				if (tok == 0)
				{
					tmp = 1;
					break;
				}
				else
					tok--;
			}
		}

		if (tmp == 1)
			cout << "NO" << endl;
		else
		{
			if (tok == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}