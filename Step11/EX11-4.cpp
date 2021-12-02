#define MAX 2500

#include <stdio.h>
#include <stdlib.h>

int BLACK(char** arr, int n, int m) {

	char** Black = NULL;
	int tmp = 0;

	Black = (char**)malloc(8 * sizeof(char*));
	for (int i = 0; i < 8; i++)
		Black[i] = (char*)malloc(8 * sizeof(char));

	for (int i = 0; i < 8; i = i + 2)
		for (int k = 0; k < 8; k = k + 2)
		{
			Black[i][k] = 'B';
			Black[i][k + 1] = 'W';
			Black[i + 1][k] = 'W';
			Black[i + 1][k + 1] = 'B';
		}

	for (int i = 0; i < 8; i++)
		for (int k = 0; k < 8; k++)
			if (arr[n + i][m + k] != Black[i][k])
				tmp++;

	for (int i = 0; i < 8; i++)
		free(Black[i]);
	free(Black);

	return tmp;
}

int WHITE(char** arr, int n, int m) {

	char** White = NULL;
	int tmp = 0;

	White = (char**)malloc(8 * sizeof(char*));
	for (int i = 0; i < 8; i++)
		White[i] = (char*)malloc(8 * sizeof(int));

	for (int i = 0; i < 8; i += 2)
		for (int k = 0; k < 8; k += 2)
		{
			White[i][k] = 'W';
			White[i][k + 1] = 'B';
			White[i + 1][k] = 'B';
			White[i + 1][k + 1] = 'W';
		}

	for (int i = 0; i < 8; i++)
		for (int k = 0; k < 8; k++)
			if (arr[n + i][m + k] != White[i][k])
				tmp++;

	for (int i = 0; i < 8; i++)
		free(White[i]);
	free(White);

	return tmp;
}

int CHESS(char** arr, int n, int m) {

	int Black = 0;
	int White = 0;

	Black = BLACK(arr, n, m);
	White = WHITE(arr, n, m);

	if (Black > White)
		return White;

	else
		return Black;
}

int main() {

	int N = 0, M = 0;
	int tok = MAX, tmp = 0;
	char** Arr = NULL;

	scanf("%d %d", &N, &M);

	Arr = (char**)malloc(N * sizeof(char*));
	for (int i = 0; i < N; i++)
		Arr[i] = (char*)malloc((M + 1) * sizeof(char));

	for (int i = 0; i < N; i++)
		scanf("%s", Arr[i]);

	for (int i = 0; i <= N - 8; i++)
		for (int k = 0; k <= M - 8; k++) {
			tmp = CHESS(Arr, i, k);

			if (tok > tmp)
				tok = tmp;
		}

	printf("%d\n", tok);

	for (int i = 0; i < N; i++)
		free(Arr[i]);
	free(Arr);

	return 0;
}