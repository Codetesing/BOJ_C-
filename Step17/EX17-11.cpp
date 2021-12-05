#include <iostream>

using namespace std;

int main()
{
	int N, sum = 0;

	cin >> N;

	while (N >= 5) {
		sum += N / 5;
		N /= 5;
	}

	cout << sum << endl;

	return 0;
}