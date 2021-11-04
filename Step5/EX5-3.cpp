#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	int num[10] = { 0 };

	cin >> A >> B >> C;
	
	int N = A * B * C;

	for (int N = A * B * C; N != 0; N /= 10)
		num[N % 10]++;

	for (auto value : num)
		cout << value << endl;

	return 0;
}