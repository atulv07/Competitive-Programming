#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

// TC O(n log n)
// SC O(log n)
// one of the most efficient sorting algorithm

// pivot is in correct position
int partition(vector<int> &arr, int l, int r) {
	int pivot = arr[r];
	int pIdx = l;
	for(int i = l; i < r; i++) {
		if(arr[i] < pivot) {
			swap(arr[i], arr[pIdx]);
			pIdx++;
		}
	}
	swap(arr[r], arr[pIdx]);
	return pIdx;
}

void quicksort(vector<int> &arr, int l, int r) {
	if(l < r) {
		int p = partition(arr, l, r);
		quicksort(arr, l, p - 1);
		quicksort(arr, p + 1, r);
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<int> arr{6, 1, 2, 4, 3, 5};
	quicksort(arr, 0, arr.size() - 1);
	for(int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	return 0;
}