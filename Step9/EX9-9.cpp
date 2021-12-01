#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x, y, z;

	while (1)
	{
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0)
			return 0;

		vector<int> v;
		v.push_back(x);
		v.push_back(y);
		v.push_back(z);

		sort(v.begin(), v.end());

		if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}