#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int NUM_minus = 0;
int NUM_zero = 0;
int NUM_one = 0;

void DNC(int** arr, int row, int col, int size)
{
	int search = arr[row][col];

	for (int i = row; i < row + size; i++)
	{
		for (int j = col; j < col + size; j++)
			if (search != arr[i][j])
			{
				search = 2;
				size /= 3;
				break;
			}
		if (search == 2)
			break;
	}

	if (search == -1)
		NUM_minus++;
	else if (search == 0)
		NUM_zero++;
	else if (search == 1)
		NUM_one++;
	else if (search == 2)
	{
		DNC(arr, row, col, size);
		DNC(arr, row, col + size, size);
		DNC(arr, row, col + size + size, size);
		DNC(arr, row + size, col, size);
		DNC(arr, row + size, col + size, size);
		DNC(arr, row + size, col + size + size, size);
		DNC(arr, row + size + size, col, size);
		DNC(arr, row + size + size, col + size, size);
		DNC(arr, row + size + size, col + size + size, size);
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

	DNC(arr, 0, 0, N);

	cout << NUM_minus << endl;
	cout << NUM_zero << endl;
	cout << NUM_one << endl;

	return 0;
}