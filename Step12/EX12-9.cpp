#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct info {
	int age;
	string name;
}info;

bool compare(info i, info j)
{
		return i.age < j.age;
}

int main()
{
	int N;
	vector<info> v;
	info temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp.age >> temp.name;
		v.push_back(temp);
	}
	
	stable_sort(v.begin(), v.end(), compare);

	for (const auto& i : v)
		printf("%d %s\n", i.age, i.name.c_str());

	return 0;
}