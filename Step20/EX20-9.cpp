#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int* tree;
long long arr[100000];
long long result, curH;
int num;

int init(int node, int start, int end) {
    if (start == end) return tree[node] = start;
    int mid = start + (end - start) / 2;
    int lidx = init(2 * node, start, mid);
    int ridx = init(2 * node + 1, mid + 1, end);
    return tree[node] = arr[lidx] > arr[ridx] ? ridx : lidx;
}

int findMinIdx(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return -1;
    if (left <= start && end <= right) return tree[node];
    int mid = start + (end - start) / 2;
    int lidx = findMinIdx(node * 2, start, mid, left, right);
    int ridx = findMinIdx(node * 2 + 1, mid + 1, end, left, right);

    if (lidx == -1) return ridx;
    else if (ridx == -1) return lidx;
    return arr[lidx] > arr[ridx] ? ridx : lidx;
}

void findMaxArea(int left, int right) {
    int minIdx = findMinIdx(1, 0, num - 1, left, right);
    long long temp = arr[minIdx] * (right - left + 1);
    result = max(result, temp);
    if (left < minIdx)
        findMaxArea(left, minIdx - 1);
    if (minIdx < right)
        findMaxArea(minIdx + 1, right);
}

int main() {
    int height;
    while (1) {
        cin >> num;
        if (num == 0) break;
        height = ceil(log2(num));
        tree = new int[1 << (height + 1)];
        //ÃÊ±âÈ­
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        init(1, 0, num - 1);
        result = 0;
        findMaxArea(0, num - 1);
        cout << result << '\n';
    }
    return 0;
}