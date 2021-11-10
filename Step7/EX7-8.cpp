#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	string dial[8] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

	cin >> input;

	int sum = 0;
	int len = input.length();

	for (auto i : input)
		for (int j = 0; j < 8; j++)
			if (dial[j].find(i) != -1)
			{
				sum += j + 2;
				break;
			}

	cout << sum + len<< endl;

	return 0;
}