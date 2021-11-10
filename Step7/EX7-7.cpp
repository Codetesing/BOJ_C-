#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;

	cin >> A >> B;

	swap(A[0], A[2]);
	swap(B[0], B[2]);

	int a = stoi(A);
	int b = stoi(B);

	cout << (a > b ? a : b) << endl;

	return 0;
}