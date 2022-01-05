#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef struct pos {
	int x;
	int y;
	int z;
}pos;

queue<pos> q;
int day[101][101][101] = { 0 };
bool visit[101][101][101] = { false };

int ROTATE_X[] = { -1, 0, 0, 1, 0, 0 };
int ROTATE_Y[] = { 0, -1, 1, 0, 0, 0 };
int ROTATE_Z[] = { 0, 0 , 0, 0, 1, -1 };
void BFS(vector<vector<vector<int>>>* v, int n, int m, int h)
{
	while (!q.empty())
	{
		pos cur = q.front();
		q.pop();
		visit[cur.x][cur.y][cur.z] = true;

		for (int i = 0; i < 6; i++)
		{
			int next_x = cur.x + ROTATE_X[i];
			int next_y = cur.y + ROTATE_Y[i];
			int next_z = cur.z + ROTATE_Z[i];

			if ((next_x >= 0) && (next_x < n) && (next_y >= 0) && (next_y < m) && (next_z >= 0) && (next_z < h))
			{
				if ((*v)[next_x][next_y][next_z] == 0 && (!visit[next_x][next_y][next_z]))
				{
					(*v)[next_x][next_y][next_z] = 1;
					day[next_x][next_y][next_z] = day[cur.x][cur.y][cur.z] + 1;
					pos temp;
					temp.x = next_x;
					temp.y = next_y;
					temp.z = next_z;
					q.push(temp);
				}
			}
		}
	}
}

int main()
{
	int N, M, H;

	cin >> M >> N >> H;

	vector<vector<vector<int>>> v(N, vector<vector<int>>(M, vector<int>(H)));

	for(int k = 0; k < H; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				cin >> v[i][j][k];

	for(int k = 0; k < H; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				if (v[i][j][k] == 1)
				{
					pos temp;
					temp.x = i;
					temp.y = j;
					temp.z = k;
					q.push(temp);
				}

	BFS(&v, N, M, H);

	int date = 0;
	for (int k = 0; k < H; k++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (v[i][j][k] == 0)
				{
					date = -1;
					break;
				}
				else
					if (date < day[i][j][k])
						date = day[i][j][k];
			}
			if (date == -1)
				break;
		}
		if (date == -1)
			break;
	}

	cout << date << endl;

	return 0;
}