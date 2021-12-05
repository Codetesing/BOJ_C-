#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int N, M;
	int temp;
	vector<int> m;
	vector<int> out;

	cin >> N;
	cin >> temp;
	for (int i = 1; i < N; i++)
	{
		cin >> M;
		m.push_back(abs(temp - M));
	}

	for (int i = 0; i < N - 2; i++)
	{
		int gcd = GCD(m[i], m[i + 1]);
		m[i + 1] = gcd;
	}

	temp = m[N - 2];


	out.push_back(temp);
	for(int i = 2; i * i <= temp; i++)
		if (temp % i == 0)
		{
			out.push_back(i);
			if(i * i != temp)
				out.push_back(temp / i);
		}

	sort(out.begin(), out.end());

	for (const auto& i : out)
		printf("%d ", i);
	printf("\n");

	return 0;
}