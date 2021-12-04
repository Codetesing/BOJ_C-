#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct info {
	int start;
	int end;
}info;

bool compare(info i, info j)
{
	if (i.end == j.end)
		return i.start < j.start;

	return i.end < j.end;
}

int main()
{
	int N;
	vector<info> v;
	info temp;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &temp.start, &temp.end);
		v.push_back(temp);
	}

	stable_sort(v.begin(), v.end(), compare);

	int cnt = 0;
	int time = -1;

	for (const auto& i : v)
	{
		if (time <= i.start)
		{
			time = i.end;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}