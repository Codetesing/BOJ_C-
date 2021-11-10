#include <iostream>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	char input[101];

	cin >> N;

	cin >> input;

	for (int i = 0; i < N; i++)
		sum += (int)input[i] - 48;

	cout << sum << endl;

	return 0;
}