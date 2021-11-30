#include <iostream>

using namespace std;

int main()
{
	int N;
	int tmp = -1;
	
	cin >> N;

	for (int i = 0; i * 5 <= N; i++)
		for (int j = 0; j * 3 <= N; j++)
			if (((j * 3) + (i * 5)) == N)
				tmp = i + j;

	cout << tmp << endl;

	return 0;
}