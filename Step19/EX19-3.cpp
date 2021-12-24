#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> in;
	vector<int> out;
	int N, K, ind = 0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		in.push_back(i);

	for (int size = N; size > 0; size--)
	{
		ind += K - 1;
		
		if (ind >= size)
			ind %= size;

		out.push_back(in[ind]);
		in.erase(in.begin() + ind);
	}

	printf("<");
	for (int i = 0; i < N - 1; i++)
		printf("%d, ", out[i]);
	printf("%d>\n", out[N - 1]);

	return 0;
}