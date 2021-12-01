#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int T = 0;
	int X1 = 0, Y1 = 0, R1 = 0, X2 = 0, Y2 = 0, R2 = 0;
	int tmp = 0, X = 0, Y = 0;

	double R = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;

		X = abs(X1 - X2);
		Y = abs(Y1 - Y2);

		R = sqrt((X * X) + (Y * Y));

		if ((R < (R1 + R2)) && (R > abs(R1 - R2)))
			cout << 2 << endl;

		else if ((R == 0) && (R1 == R2))
			cout << -1 << endl;

		else if ((R == (R1 + R2)) || ((R == abs(R1 - R2))))
			cout << 1 << endl;

		else
			cout << 0 << endl;
	}

	return 0;
}