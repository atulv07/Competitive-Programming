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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int sum = 0;
		int pos = 0;
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr[i] -= a;
			if(arr[i] > 0) pos += arr[i];
			sum += arr[i];
		}
		if(sum != 0) {
			cout << -1 << "\n";
		}
		else {
			cout << pos << "\n";
			for(int i = 0; i < n; i++) {
				for(int j = 1; j <= arr[i]; j++) {
					for(int k = 0; k < n; k++) {
						if(arr[k] < 0) {
							cout << i + 1 << " " << k + 1 << "\n";
							arr[k]++;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}