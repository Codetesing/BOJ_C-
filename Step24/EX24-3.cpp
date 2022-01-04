#define MAX 25

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int N, cnt;
bool visit[MAX][MAX] = { false };

int rotate_x[4] = { -1, 0, 0, 1 };
int rotate_y[4] = { 0, -1, 1, 0 };

void DFS(string* v, int row, int col)
{
	cnt++;
	visit[row][col] = true;

	for (int i = 0; i < 4; i++)
		if((row + rotate_x[i]) >= 0 && (row + rotate_x[i] < N) && (col + rotate_y[i] >= 0) && (col + rotate_y[i] < N))
			if ((v[row + rotate_x[i]][col + rotate_y[i]] == '1') && (!visit[row + rotate_x[i]][col + rotate_y[i]]))
				DFS(v, row + rotate_x[i], col + rotate_y[i]);
}

int main()
{
	cin >> N;

	string *arr = new string[N];
	
	vector<int> out;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] == '1' && visit[i][j] == false)
			{
				cnt = 0;
				DFS(arr, i, j);
				out.push_back(cnt);
			}
		}
	}

	sort(out.begin(), out.end());

	cout << out.size() << endl;

	for (int i = 0; i < out.size(); i++)
		cout << out[i] << endl;

	return 0;
}