#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	cout << min({ w - x, h - y, x, y }) << endl;

	return 0;
}