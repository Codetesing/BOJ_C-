#define _CRT_SECURE_NO_WARNINGS

#define MAX 301

#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

typedef struct pos {
	int x;
	int y;
	int len;
}pos;

int ROTATE_X[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int ROTATE_Y[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int bfs(int size, int x, int y, int n, int m)
{
	bool visit[MAX][MAX] = { false };
	queue<pos> q;
	pos cur;

	cur.x = x;
	cur.y = y;
	cur.len = 0;
	q.push(cur);
	visit[x][y] = true;

	while (!q.empty())
	{
		cur = q.front();
		q.pop();

		if ((cur.x == n) && (cur.y) == m)
			return cur.len;

		for (int i = 0; i < 8; i++)
		{
			int next_x = cur.x + ROTATE_X[i];
			int next_y = cur.y + ROTATE_Y[i];
			if ((next_x >= 0) && (next_x < size) && (next_y >= 0) && (next_y < size))
			{
				if (!visit[next_x][next_y])
				{
					pos temp;
					temp.x = next_x;
					temp.y = next_y;
					temp.len = cur.len + 1;
					q.push(temp);
					visit[next_x][next_y] = true;
				}
			}
		}
	}

	return -1;
}

int main()
{
	int T;

	cin >> T;

	for (int test_case = 0; test_case < T; test_case++)
	{
		int l, cur_x, cur_y, target_x, target_y;

		scanf("%d", &l);
		scanf("%d %d", &cur_x, &cur_y);
		scanf("%d %d", &target_x, &target_y);
		
		int out = bfs(l, cur_x, cur_y, target_x, target_y);

		printf("%d\n", out);
	}

	return 0;
}