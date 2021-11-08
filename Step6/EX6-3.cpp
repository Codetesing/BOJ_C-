#include <iostream>
#include <cstring>

using namespace std;

bool IS_HAN(int n)
{
	int a = n / 100;

	n %= 100;

	int b = n / 10;
	int c = n % 10;

	if (a + c == b + b)
		return true;

	return false;
}

int main()
{
	int N, count;

	cin >> N;

	if (N < 100)
		count = N;

	else
	{
		count = 99;

		if (N == 1000)
			N--;

		for (int i = 100; i <= N; i++)
			if (IS_HAN(i))
				count++;
	}
	cout << count << endl;

	return 0;
}