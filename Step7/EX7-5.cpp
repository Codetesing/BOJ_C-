#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input;
	int alpha[26] = { 0 };

	cin >> input;

	int len = input.length();

	transform(input.begin(), input.end(), input.begin(), ::toupper);

	for (int i = 0; i < len; i++)
		alpha[input[i] - 65]++;

	int max_index = max_element(alpha, alpha + 26) - alpha;

	for (int i = 0; i < 26; i++)
		if ((i != max_index) && (alpha[i] == alpha[max_index]))
		{
			cout << "?" << endl;
			return 0;
		}

	cout << (char)(max_index + 65) << endl;

	return 0;
}