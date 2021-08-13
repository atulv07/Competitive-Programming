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
// SC O(n)

void merge(vector<int> &arr, int l, int m, int r) {
	int i = l; // starting index for left subarray
	int j = m + 1; // starting index for right subarray
	vector<int> temp;
	while(i <= m && j <= r) {
		if(arr[i] <= arr[j]) {
			temp.pb(arr[i]);
			i++;
		}
		else {
			temp.pb(arr[j]);
			j++;
		}
	}
	while(i <= m) {
		temp.pb(arr[i]);
		i++;
	}
	while(j <= r) {
		temp.pb(arr[j]);
		j++;
	}
	for(int z = l; z <= r; z++)
		arr[z] = temp[z - l];
}

void mergeSort(vector<int> &arr, int l, int r) {
	if(l < r) {
		int m = (l + r) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
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

	vector<int> arr{6, 2, 9, 3, 8, 4, 1, 7, 5};
	mergeSort(arr, 0, arr.size() - 1);
	for(int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	return 0;
}