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

// O(log n)
void heapify(vector<int> &arr, int i) {
	int n = arr.size();
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if(l < n && arr[l] > arr[largest])
		largest = l;
	if(r < n && arr[r] > arr[largest])
		largest = r;
	if(largest < n && i < n && largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, largest);
	}
}

// O(n log n)
void heapSort(vector<int> &arr) {
	int n = arr.size();
	for(int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, i);
	for(int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, 0);
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

	vector<int> arr = {12, 11, 13, 5, 6, 7};
	int n = arr.size();
	heapSort(arr);
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}