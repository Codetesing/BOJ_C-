#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

typedef struct pos {
	int x;
	int y;
}pos;

using namespace std;

bool compare(pos i, pos j)
{
	if (i.y != j.y)
		return i.y < j.y;
	else
		return i.x < j.x;
}

int main()
{
	vector<pos> v;

	int N;
	pos temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &temp.x, &temp.y);
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	for (const auto& i : v)
		printf("%d %d\n", i.x, i.y);

	return 0;
}