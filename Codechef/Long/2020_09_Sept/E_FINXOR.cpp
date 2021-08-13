#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double

int helper() {
	ll n, a;
	cin >> n;
	vector<ll> outputs;
	for(int i = 20; i >= 1; i--) {
		cout << i << (1 << i) << "\n";
		cout.flush();
		cin >> a;
		outputs.pb(a);
	}
	ll maxx = outputs[0] - n * (1 << 20);
	int size = outputs.size();
	for(int i = 1; i < size; i++) {
		if(outputs[i] >= maxx) outputs[i] = ((n - (outputs[i] - maxx) / (1 << (size - i))) / 2);
	}
	ll ans = 0, res;
	for(int i = 1; i < size; i++) {
		if(outputs[i] % 2 == 0) ans += 1;
		else ans += (1 << (size - 1));
		cout << 2 << " " << ans << "\n";
		cout.flush();
		cin >> res;
		return res;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin >> t;
	while(t--) {
		if(!helper()) break;
		cout << "\n";
		cout.flush();
	}
	return 0;
}