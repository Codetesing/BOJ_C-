#define PI 3.14159265358979323846

#include <iostream>

using namespace std;

int main() {

	double R = 0;
	double UCLID = 0, TAXI = 0;

	scanf("%lf", &R);

	UCLID = R * R * PI;

	TAXI = 2 * R * R;

	printf("%.6lf\n%.6lf\n", UCLID, TAXI);

	return 0;
}