#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	int N;
	vector<int> v;

	cin >> N;
	
	for (int i = 10; N != 0; N /= 10)
		v.push_back(N % 10);
	
	sort(v.begin(), v.end(), compare);

	for (const auto& i : v)
		cout << i;

	return 0;
}