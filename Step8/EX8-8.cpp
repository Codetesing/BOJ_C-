#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

long long GetMeterPerStep(int step) {

	long long meter = 0;
	int max = step / 2;

	if (max % 2)
		meter = ((max + 1) * (max / 2)) + (max / 2 + 1);

	else
		meter = ((max + 1) * (max / 2));

	meter = meter * 2;

	if (step % 2)
		meter = meter + step / 2 + 1;

	return meter;
}

int main()
{

	int numTC;
	long long start, end, dist;
	int cnt, bDone;

	scanf("%d", &numTC);

	for (int i = 0; i < numTC; i++) {

		cnt = 1;
		bDone = 1;

		scanf("%lld %lld", &start, &end);

		dist = end - start;

		if (dist <= 2)
			printf("%d\n", dist);

		else
		{
			while (bDone)
			{

				if (GetMeterPerStep(cnt + 1) >= dist)
				{
					printf("%d\n", cnt + 1);
					bDone = 0;
				}
				cnt++;
			}

		}
	}
}