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

	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<string> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int ans = 0;
		for(char c = 'a'; c <= 'e'; c++) {
			vector<int> score(n);
			int k = 0;
			for(int i = 0; i < n; i++, k++) {
				int freq = count(all(arr[i]), c);
				score[k] = 2 * freq - (int)arr[i].size();
			}
			sort(all(score), greater<int>());
			int sum = 0;
			for(int i = 0; i < n; i++) {
				sum += score[i];
				if(sum <= 0)
					break;
				ans = max(ans, i + 1);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}