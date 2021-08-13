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

struct rect {
	ll x1, x2, y1, y2;
};

ll area (rect a) {
	return (a.x2 - a.x1) * (a.y2 - a.y1);
}

bool myC(pair<ll, ll> a, pair<ll, ll> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	ll t, n, xi, yi, x1, x2, y1, y2;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<pair<ll, ll>> arr;
		for(ll i = 0; i < n; i++) {
			cin >> xi >> yi;
			arr.pb(mp(xi, yi));
		}
		sort(arr.begin(), arr.end());
		vector<rect> prefixX(n);
		x1 = arr[0].first;
		x2 = arr[0].first;
		y1 = arr[0].second;
		y2 = arr[0].second;
		struct rect temp = {x1, x2, y1, y2};
		prefixX[0] = temp;
		for(ll i = 1; i < n; i++) {
			ll x = arr[i].first;
			ll y = arr[i].second;
			x1 = min(x, x1);
			x2 = max(x, x2);
			y1 = min(y, y1);
			y2 = max(y, y2);
			temp = {x1, x2, y1, y2};
			prefixX[i] = temp;
		}
		vector<rect> suffixX(n);
		x1 = arr[n - 1].first;
		x2 = arr[n - 1].first;
		y1 = arr[n - 1].second;
		y2 = arr[n - 1].second;
		temp = {x1, x2, y1, y2};
		suffixX[n - 1] = temp;
		for(ll i = n - 2; i >= 0; i--) {
			ll x = arr[i].first;
			ll y = arr[i].second;
			x1 = min(x, x1);
			x2 = max(x, x2);
			y1 = min(y, y1);
			y2 = max(y, y2);
			temp = {x1, x2, y1, y2};
			suffixX[i] = temp;
		}
		ll minArea = min(area(prefixX[n - 1]), area(suffixX[0]));
		for(ll i = 0; i < n - 1; i++) {
			minArea = min(minArea, area(prefixX[i]) + area(suffixX[i + 1]));
		}

		sort(arr.begin(), arr.end(), myC);
		vector<rect> prefixY(n);
		x1 = arr[0].first;
		x2 = arr[0].first;
		y1 = arr[0].second;
		y2 = arr[0].second;
		temp = {x1, x2, y1, y2};
		prefixY[0] = temp;
		for(ll i = 1; i < n; i++) {
			ll x = arr[i].first;
			ll y = arr[i].second;
			x1 = min(x, x1);
			x2 = max(x, x2);
			y1 = min(y, y1);
			y2 = max(y, y2);
			temp = {x1, x2, y1, y2};
			prefixY[i] = temp;
		}
		vector<rect> suffixY(n);
		x1 = arr[n - 1].first;
		x2 = arr[n - 1].first;
		y1 = arr[n - 1].second;
		y2 = arr[n - 1].second;
		temp = {x1, x2, y1, y2};
		suffixX[n - 1] = temp;
		for(ll i = n - 2; i >= 0; i--) {
			ll x = arr[i].first;
			ll y = arr[i].second;
			x1 = min(x, x1);
			x2 = max(x, x2);
			y1 = min(y, y1);
			y2 = max(y, y2);
			temp = {x1, x2, y1, y2};
			suffixY[i] = temp;
		}
		minArea = min(minArea, area(prefixY[n - 1]));
		minArea = min(minArea, area(suffixY[0]));
		for(ll i = 0; i < n - 1; i++) {
			minArea = min(minArea, area(prefixY[i]) + area(suffixY[i + 1]));
		}
		cout << minArea << "\n";
	}
	return 0;
}