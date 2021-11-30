#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, V;

	cin >> A >> B >> V;

	cout << (int)ceil((double) (V - A) / (A - B)) + 1 << endl;

	return 0;
}