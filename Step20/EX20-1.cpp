#define _CRT_SECURE_NO_WARNINGS
#define WHITE 0
#define BLUE 1

#include <iostream>

using namespace std;

int white = 0;
int blue = 0;

void PAPER(int** arr, int row, int col, int size)
{
	int tok = arr[row][col];

	for (int i = row; i < row + size; i++)
	{
		for (int j = col; j < col + size; j++)
			if (arr[i][j] != tok)
			{
				tok = -1;
				size /= 2;
				break;
			}
		if (tok == -1)
			break;
	}

	if (tok == WHITE)
		white++;
	else if (tok == BLUE)
		blue++;
	else if (tok == -1)
	{
		PAPER(arr, row, col, size);
		PAPER(arr, row + size, col, size);
		PAPER(arr, row, col + size, size);
		PAPER(arr, row + size, col + size, size);
	}
}

int main()
{
	int N;

	cin >> N;

	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new int[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);

	PAPER(arr, 0, 0, N);

	cout << white << endl;
	cout << blue << endl;

	return 0;
}