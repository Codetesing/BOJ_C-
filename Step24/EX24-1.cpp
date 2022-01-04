#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> dfs;
vector<int> bfs;

bool visiting[100000] = { false };

int DFS_SEARCH(vector<vector<int>> v, int n)
{
	for (int i = 0; i < v[n].size(); i++)
		if (visiting[v[n][i]] == false)
			return v[n][i];
}

void DFS(vector<vector<int>> v, int starting)
{
	visiting[starting] = true;
	dfs.push_back(starting);
	for(int i = 0; i < v[starting].size(); i++)
		if (visiting[v[starting][i]] == 0)
		{
			int next = DFS_SEARCH(v, starting);
			DFS(v, next);
		}
}

void BFS(vector<vector<int>> v, int starting)
{
	queue<int> q;
	bool visiting[100000] = { false };

	bfs.push_back(starting);
	q.push(starting);
	visiting[starting] = true;

	while (!q.empty())
	{
		int n = q.front();
		q.pop();
		for(int i = 0; i < v[n].size(); i++)
			if (visiting[v[n][i]] == false)
			{
				bfs.push_back(v[n][i]);
				q.push(v[n][i]);
				visiting[v[n][i]] = true;
			}
	}
}

int main()
{
	int N, M, V;
	int from, to;

	cin >> N >> M >> V;

	vector<vector<int>> v(N + 1);

	for (int i = 0; i < M; i++)
	{
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}

	for (int i = 1; i <= N; i++)
		sort(v[i].begin(), v[i].end());

	DFS(v, V);
	for (int i = 0; i < dfs.size(); i++)
		printf("%d ", dfs[i]);
	printf("\n");

	BFS(v, V);
	for (int i = 0; i < bfs.size(); i++)
		printf("%d ", bfs[i]);
	printf("\n");

	return 0;
}