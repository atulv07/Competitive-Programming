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

	ll t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<ll> arr(n);
		set<ll> s;
		for(ll i = 0; i < n; i++) {
			cin >> arr[i];
			s.insert(arr[i]);
		}
		ll maxsum = 0;
		for(ll i = 0; i <= n - k; i++) {
			set<ll> news;
			ll sum = 0;
			for(ll j = i; j < i + k; j++) {
				sum += arr[j];
				news.insert(arr[j]);
			}
			if(news.size() == s.size()) maxsum = max(maxsum, sum);
		}
		cout << maxsum << "\n";
	}
	return 0;
}