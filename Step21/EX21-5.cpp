#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calc_count(int mid, vector<int>& v) {
	int std = v[0];
	int count = 1;

	for (int i = 1; i < v.size(); i++) {
		if (v[i] - std >= mid) {
			count++;
			std = v[i];
		}
	}

	return count;
}

int main() {

	int N, C;
	cin >> N >> C;

	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int start = 1;
	int end = v[N - 1];
	int result = 0;

	while (start <= end) {
		int mid = (start + end) / 2;

		int count = calc_count(mid, v);

		if (count >= C) {
			result = max(result, mid);
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	cout << result << endl;

	return 0;
}