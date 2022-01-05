#define MAX 100001

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int len[MAX] = { 0 };
bool visit[MAX] = { false };
int N, K;

void BFS()
{
	queue<int> q;

	q.push(N);
	len[N] = 0;
	visit[N] = true;

	while (!q.empty())
	{
		int cur = q.front();

		if (cur == K)
			break;

		q.pop();

		if ((cur + 1 >= 0) && (cur + 1 < MAX) && (!visit[cur + 1]))
		{
			visit[cur + 1] = true;
			q.push(cur + 1);
			len[cur + 1] = len[cur] + 1;
		}

		if ((cur - 1 >= 0) && (cur - 1 < MAX) && (!visit[cur - 1]))
		{
			visit[cur - 1] = true;
			q.push(cur - 1);
			len[cur - 1] = len[cur] + 1;
		}

		if ((cur * 2 >= 0) && (cur * 2 < MAX) && (!visit[cur * 2]))
		{
			visit[cur * 2] = true;
			q.push(cur * 2);
			len[cur * 2] = len[cur] + 1;
		}
	}
}

int main()
{
	cin >> N >> K;

	BFS();

	cout << len[K] << endl;
}