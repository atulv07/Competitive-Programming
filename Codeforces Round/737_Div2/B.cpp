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

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int> sortArr = arr;
		sort(all(sortArr));
		unordered_map<int, int> um;
		for(int i = 0; i < n; i++)
			um[sortArr[i]] = i;
		for(int i = 0; i < n; i++)
			arr[i] = um[arr[i]];

		int cnt = 0;
		int i = 0;
		while(i < n) {
			if(i + 1 < n) {
				if(arr[i] == arr[i + 1] - 1) {
					while(i + 1 < n && arr[i] == arr[i + 1] - 1)
						i++;
				}
			}
			cnt++;
			i++;
		}
		if(cnt <= k)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}