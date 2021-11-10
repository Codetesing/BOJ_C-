#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> v;
	string input;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int alpha[26] = { 0 };

		cin >> input;

		int len = input.length();

		v.push_back(input);
		
		alpha[(int)input[0] - 97]++;

		for (int j = 1; j < len; j++)
		{
			if (input[j - 1] != input[j])
				if (alpha[(int)input[j] - 97] != 0)
				{
					v.pop_back();
					break;
				}
				else
					alpha[(int)input[j] - 97]++;
		}
	}

	cout << v.size() << endl;

	return 0;
}