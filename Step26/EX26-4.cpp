#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

#define MAX 4000000

int N, sum;
int check[MAX + 1]; // 0�� �Ҽ��� ǥ��  
vector<int> p_sum;
vector<int> prime_num;


int main()
{
	cin >> N;
	p_sum.push_back(0);
	// �����佺�׳׽��� ü 	 	
	for (int i = 2; i < sqrt(MAX); i++)
	{
		for (int j = 2 * i; j <= MAX; j += i)
			check[j] = 1; // �Ҽ��� �ƴ��� ǥ��  
	}

	for (int i = 2; i <= MAX; i++)
	{
		if (check[i] == 0)
		{
			sum += i;
			p_sum.push_back(sum);
		}
	}

	// �������� 
	int ans, left, right;
	ans = 0;
	left = 0;
	right = 0;

	while (left <= right && right < p_sum.size())
	{
		if (p_sum[right] - p_sum[left] > N)
		{
			left++;
		}
		else if (p_sum[right] - p_sum[left] < N)
		{
			right++;
		}
		else // (p_sum[right] - p_sum[left] == N)
		{
			ans++;
			right++;
		}
	}

	cout << ans;

}