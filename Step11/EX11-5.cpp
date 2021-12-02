#define MAX 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CNT_SIX(int n) {

	int tmp = 0;
	int* arr = NULL;

	arr = (int*)malloc(MAX * sizeof(int));

	for (tmp = 0; n != 0; n /= 10, tmp++)
		arr[tmp] = n % 10;

	for (int i = 0; i < tmp - 2; i++)
		if ((arr[i] == 6) && (arr[i + 1] == 6) && (arr[i + 2] == 6))
			return true;

	free(arr);

	return false;
}

int ENDNUM(int n) {

	int tmp = 0;

	for (int i = 1; ; i++) {

		if (CNT_SIX(i))
			tmp++;

		if (tmp == n)
			return i;

	}
}

int main() {

	int N = 0;
	int tok = 0;

	scanf("%d", &N);

	tok = ENDNUM(N);

	printf("%d\n", tok);

	return 0;
}