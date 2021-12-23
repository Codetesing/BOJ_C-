#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string in;

	while(1)
	{
		vector<int> stack;

		getline(cin, in);

		if (in == ".")
			break;

		int tok = -1, tmp = 0;
		int len = in.length();

		for (int i = 0; i < len - 1; i++)
		{
			if (in[i] == '(')
			{
				tok++;
				stack.push_back(1);
			}

			else if (in[i] == ')')
			{
				if (tok == -1)
				{
					tmp = 1;
					break;
				}
				else
				{
					if (stack[tok] == 1)
					{
						tok--;
						stack.pop_back();
					}
					else
					{
						tmp = 1;
						break;
					}
				}
			}

			else if (in[i] == '[')
			{
				tok++;
				stack.push_back(2);
			}

			else if (in[i] == ']')
			{
				if (tok == -1)
				{
					tmp = 1;
					break;
				}
				else
				{
					if (stack[tok] == 2)
					{
						tok--;
						stack.pop_back();
					}
					else
					{
						tmp = 1;
						break;
					}
				}
			}
		}

		if (tmp == 1)
			cout << "no" << endl;
		else
		{
			if (tok == -1)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}

	return 0;
}