#define _CRT_SECURE_NO_WARNINGS
#define MAX 51

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool visit[MAX][MAX];
int cnt, M, N;

int rotate_x[4] = { -1, 0, 0, 1 };
int rotate_y[4] = { 0, -1, 1, 0 };

void DFS(vector<vector<int>> v, int row, int col)
{
	visit[row][col] = true;

	for (int i = 0; i < 4; i++)
		if ((row + rotate_x[i]) >= 0 && (row + rotate_x[i] < M) && (col + rotate_y[i] >= 0) && (col + rotate_y[i] < N))
			if ((v[row + rotate_x[i]][col + rotate_y[i]] == 1) && (!visit[row + rotate_x[i]][col + rotate_y[i]]))
				DFS(v, row + rotate_x[i], col + rotate_y[i]);
}

int main()
{
	int T, K, X, Y;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> M >> N >> K;

		vector<vector<int>> v(M, vector<int>(N));

		memset(visit, false, sizeof(visit));
		
		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
				v[i][j] = 0;

		for (int i = 0; i < K; i++)
		{
			scanf("%d %d", &X, &Y);
			v[X][Y] = 1;
		}

		cnt = 0;
		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
				if (v[i][j] == 1 && !visit[i][j])
				{
					DFS(v, i, j);
					cnt++;
				}
		printf("%d\n", cnt);
	}

	return 0;
}