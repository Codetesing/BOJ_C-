#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(string i, string j)
{
	if (i.length() != j.length())
		return i.length() < j.length();
	else
		return i < j;
}

int main()
{
	int N;
	vector<string> v;
	string temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());

	for (const auto& i : v)
		printf("%s\n", i.c_str());

	return 0;
}