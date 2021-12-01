#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> v;

	cin >> N;

	for (int i = 2; i <= N; i++)
		while (N % i == 0)
		{
			N /= i;
			cout << i << endl;
		}

	return 0;
}