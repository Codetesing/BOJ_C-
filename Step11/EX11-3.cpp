#include <iostream>

using namespace std;

void SCORE(int* s, int* w, int* h, int i, int n)
{
	int sc = 1;
	for (int j = 0; j < n; j++)
		if (w[j] > w[i] && h[j] > h[i])
			sc++;
	
	s[i] = sc;
}

int main()
{
	int N;

	cin >> N;

	int* W = new int[N];
	int* H = new int[N];
	int* score = new int[N];

	for (int i = 0; i < N; i++)
		cin >> W[i] >> H[i];

	for (int i = 0; i < N; i++)
		SCORE(score, W, H, i, N);

	for (int i = 0; i < N; i++)
		cout << score[i] << ' ';
	cout << endl;

	return 0;
}