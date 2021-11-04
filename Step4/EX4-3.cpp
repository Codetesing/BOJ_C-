#include <iostream>

using namespace std;

int main()
{
	int N;
	int num, count = 0;

	cin >> N;

	num = N;

	while (1)
	{
		num = ((num % 10) * 10) + (((num % 10) + (num / 10)) % 10);
		count++;

		if (num == N)
			break;
	}
	cout << count << endl;

	return 0;
}