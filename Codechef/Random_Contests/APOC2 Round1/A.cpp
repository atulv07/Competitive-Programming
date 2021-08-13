#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int minVal = INT_MAX;
	for(int i = 0; i < n - k; i++) {
		int minn = INT_MAX, maxx = INT_MIN;
		for(int j = i; j < i + k; j++) {
			minn = min(minn, arr[j]);
			maxx = max(maxx, arr[j]);
		}
		minVal = min(minVal, maxx - minn);
	}
	cout << minVal;
	return 0;
}