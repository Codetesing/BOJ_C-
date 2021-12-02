#include <stdio.h>
#include <stdlib.h>

void PRINT_ARR(char** arr, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
}

void INIT(char** arr, int n) {

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = ' ';

}

void PRINT(char** arr, int row, int col) {

	arr[row - 1][col - 1] = '*';
	arr[row - 1][col] = '*';
	arr[row - 1][col + 1] = '*';
	arr[row][col - 1] = '*';
	arr[row][col] = ' ';
	arr[row][col + 1] = '*';
	arr[row + 1][col - 1] = '*';
	arr[row + 1][col] = '*';
	arr[row + 1][col + 1] = '*';

}

void PRINT_STAR(char** arr, int row, int col, int n) {

	if (n == 3) {
		PRINT(arr, row, col);
		return;
	}

	return PRINT_STAR(arr, row - n / 3, col - n / 3, n / 3),
		PRINT_STAR(arr, row - n / 3, col, n / 3),
		PRINT_STAR(arr, row - n / 3, col + n / 3, n / 3),
		PRINT_STAR(arr, row, col - n / 3, n / 3),
		PRINT_STAR(arr, row, col + n / 3, n / 3),
		PRINT_STAR(arr, row + n / 3, col - n / 3, n / 3),
		PRINT_STAR(arr, row + n / 3, col, n / 3),
		PRINT_STAR(arr, row + n / 3, col + n / 3, n / 3);
}

int main() {

	int N = 0;
	char** Arr = NULL;

	scanf("%d", &N);

	Arr = (char**)malloc(N * sizeof(char*));
	for (int i = 0; i < N; i++)
		Arr[i] = (char*)malloc(N * sizeof(char));

	INIT(Arr, N);

	PRINT_STAR(Arr, N / 2, N / 2, N);

	PRINT_ARR(Arr, N);

	for (int i = 0; i < N; i++)
		free(Arr[i]);
	free(Arr);

	return 0;
}