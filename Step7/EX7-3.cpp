#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alpha[26];
	string input;

	for (int i = 0; i < 26; i++)
		alpha[i] = -1;

	cin >> input;

	int len = input.length();

	for (int i = 0; i < len; i++)
		if (alpha[(int)input[i] - 97] == -1)
			alpha[(int)input[i] - 97] = i;

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << ' ';
	cout << endl;

	return 0;
}