#include <iostream>

using namespace std;

int main()
{
	int T, H, W, N;

	cin >> T;

	for (int i = 0; i < T; i ++)
	{
		cin >> H >> W >> N;

		int temp = ((N - 1) % H + 1) * 100 + ((N - 1) / H + 1);

		cout << temp << endl;
	}

	return 0;
}