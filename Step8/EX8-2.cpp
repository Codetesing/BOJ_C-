#include <iostream>

using namespace std;

int main()
{
	int N;
	int range = 1;
	int i;

	cin >> N;

	for (i = 1; range < N; i++)
		range += 6 * i;

	cout << i << endl;

	return 0;
}