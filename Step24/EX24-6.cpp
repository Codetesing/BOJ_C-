#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct pos {
	int x;
	int y;
}pos;

queue<pos> q;
int day[1001][1001] = { 0 };
bool visit[1001][1001] = { false };

int ROTATE_X[] = { -1, 0, 0, 1 };
int ROTATE_Y[] = { 0, -1, 1, 0 };

void BFS(vector<vector<int>> *v, int n, int m)
{
	while (!q.empty())
	{
		pos cur = q.front();
		q.pop();
		visit[cur.x][cur.y] = true;

		for (int i = 0; i < 4; i++)
		{
			int next_x = cur.x + ROTATE_X[i];
			int next_y = cur.y + ROTATE_Y[i];

			if ((next_x >= 0) && (next_x < n) && (next_y >= 0) && (next_y < m))
			{
				if ((*v)[next_x][next_y] == 0 && (!visit[next_x][next_y]))
				{
					(*v)[next_x][next_y] = 1;
					day[next_x][next_y] = day[cur.x][cur.y] + 1;
					pos temp;
					temp.x = next_x;
					temp.y = next_y;
					q.push(temp);
				}
			}
		}
	}
}

int main()
{
	int N, M;

	cin >> M >> N;

	vector<vector<int>> v(N, vector<int>(M));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> v[i][j];

	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			if (v[i][j] == 1)
			{
				pos temp;
				temp.x = i;
				temp.y = j;
				q.push(temp);
			}

	BFS(&v, N, M);

	int date = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (v[i][j] == 0)
			{
				date = -1;
				break;
			}
			else
				if (date < day[i][j])
					date = day[i][j];
		}
		if (date == -1)
			break;
	}

	cout << date << endl;

	return 0;
}