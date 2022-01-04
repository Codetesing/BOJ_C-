#define MAX 101

#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
bool visiting[MAX] = { false };

void DFS(vector<vector<int>> v, int u)
{
	visiting[u] = true;

	for (int i = 0; i < v[u].size(); i++)
		if (visiting[v[u][i]] == false)
		{
			cnt++;
			DFS(v, v[u][i]);
		}
}


int main()
{
	int N, M;
	int from, to;

	cin >> N;

	vector<vector<int>> v(N + 1);

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> from >> to;

		v[from].push_back(to);
		v[to].push_back(from);
	}

	DFS(v, 1);

	cout << cnt << endl;

	return 0;
}