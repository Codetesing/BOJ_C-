#include <iostream>
#include <vector>

using namespace std;

int POINT(int* arr) {

	if (arr[0] == arr[1])
		return arr[2];

	else if (arr[0] == arr[2])
		return arr[1];

	else
		return arr[0];
}

int main()
{
	int X[3];
	int Y[3];

	int x, y;

	for (int i = 0; i < 3; i++)
		cin >> X[i] >> Y[i];

	cout << POINT(X) << ' ' << POINT(Y) << endl;

	return 0;
}