#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int K;
	vector<int> stack;
	int in;

	cin >> K;

	for (int i = 0; i < K; i++)
	{
		scanf("%d", &in);

		if (in == 0)
			stack.pop_back();

		else
			stack.push_back(in);
	}
	int sum = 0;

	for (auto& i : stack)
		sum += i;

	cout << sum << endl;

	return 0;
}