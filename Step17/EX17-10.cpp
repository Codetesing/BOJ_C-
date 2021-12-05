#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T, N;
	string temp, type;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<string> t;
		vector<int> v;

		cin >> N;
		for (int j = 0; j < N; j++)
		{
			int tok = 0;
			int k;

			cin >> temp >> type;
			
			for (k = 0; k < t.size(); k++)
				if (t[k] == type)
				{
					tok = 1;
					break;
				}
			if (tok == 1)
				v[k]++;
			else
			{
				t.push_back(type);
				v.push_back(2);
			}
		}
		int out = 1;
		for (auto& i : v)
			out *= i;
		cout << out - 1 << endl;
	}

	return 0;
}