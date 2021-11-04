#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		int len = input.length();
		int sum = 0;
		int tok = 1;

		for (int i = 0; i < len; i++)
		{
			if (input[i] == 'O')
			{
				sum += tok;
				tok++;
			}
			else
				tok = 1;
		}

		cout << sum << endl;
	}

	return 0;
}