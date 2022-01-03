#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct compare_min {
	bool operator()(int& a, int& b)
	{
		return a > b;
	}
};

struct compare_max {
	bool operator()(int& a, int& b)
	{
		return a < b;
	}
};

int main()
{
	priority_queue <int, vector<int>, compare_min> minHeap;
	priority_queue <int, vector<int>, compare_max> maxHeap;
	int N, in;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &in);

		if (maxHeap.size() == minHeap.size())
			maxHeap.push(in);
		else
			minHeap.push(in);

		if (!minHeap.empty() && !maxHeap.empty() && minHeap.top() < maxHeap.top()) 
		{
			int a = maxHeap.top(), b = minHeap.top();
			maxHeap.pop(); minHeap.pop();
			maxHeap.push(b); minHeap.push(a);
		}
		printf("%d\n", maxHeap.top());
	}
	return 0;
}