#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

string QUARD(char** arr, int row, int col, int size)
{
	char search = arr[row][col];

	for (int i = row; i < row + size; i++)
	{
		for (int j = col; j < col + size; j++)
			if (arr[i][j] != search)
			{
				search = '*';
				size /= 2;
				break;
			}
		if (search == '*')
			break;
	}

	if (search == '*')
		return "(" + QUARD(arr, row, col, size) + QUARD(arr, row, col + size, size) + QUARD(arr, row + size, col, size) + QUARD(arr, row + size, col + size, size) + ")";
	else if (search == '0')
		return "0";
	else if (search == '1')
		return "1";
}

int main()
{
	string out;
	int N;

	cin >> N;

	char** arr = new char* [N];
	for (int i = 0; i < N; i++)
		arr[i] = new char[N + 1];

	for (int i = 0; i < N; i++)
		scanf("%s", arr[i]);

	cout << QUARD(arr, 0, 0, N) << endl;

	return 0;
}