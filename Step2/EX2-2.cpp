#include <iostream>

using namespace std;

int main()
{
	int score;
	char out;

	cin >> score;

	if (score >= 90)
		out = 'A';

	else if (score >= 80)
		out = 'B';

	else if (score >= 70)
		out = 'C';

	else if (score >= 60)
		out = 'D';

	else
		out = 'F';

	cout << out << endl;

	return 0;
}