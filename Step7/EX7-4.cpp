#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		string input;
		vector <char> v;

		cin >> N >> input;

		int len = input.length();

		for (int i = 0; i < len; i++)
			for (int j = 0; j < N; j++)
				v.push_back(input[i]);

		for (auto& i : v)
			cout << i;
		cout << endl;
	}

	return 0;
}