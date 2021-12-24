#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int N, tmp;

	cin >> N;

	for (int i = 1; i <= N; i++)
		q.push(i);

	for (int size = N; size > 1; size--)
	{
		q.pop();
		tmp = q.front();
		q.pop();
		q.push(tmp);
	}

	cout << q.front() << endl;

	return 0;
}