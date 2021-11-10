#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int count = 1;

	getline(cin, input);

	while (input[0] == ' ')
		input.erase(0, 1);

	if (!input.empty())
		while (input[input.length() - 1] == ' ')
			input.pop_back();

	else
		count = 0;

	int len = input.length();

	for (int i = 0; i < len; i++)
		if (input[i] == ' ')
			count++;

	cout << count << endl;

	return 0;
}