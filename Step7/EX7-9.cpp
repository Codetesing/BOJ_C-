#include <iostream>
#include <string.h>
#include <regex>

using namespace std;

int main() 
{
	string input;
	string tok[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string trans_tok[8] = { "1", "2", "3", "4", "5", "6", "7", "8" };

	cin >> input;

	for (int i = 0; i < 8; i++)
		input = regex_replace(input, regex(tok[i]), trans_tok[i]);

	cout << input.length() << endl;

	return 0;
}