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

void makeCombiUtil(vector<vector<ll>> &ans, vector<ll> &tmp, ll n, ll left, ll k) {
    if (k == 0) {
        ans.push_back(tmp);
        return;
    }
    for (ll i = left; i <= n; ++i) {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);
        tmp.pop_back();
    }
}

vector<vector<ll>> makeCombi(ll n, ll k) {
    vector<vector<ll>> ans;
    vector<ll> tmp;
    makeCombiUtil(ans, tmp, n, 1, k);
    return ans;
}

int main() {
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
		vector<vector<ll>> arr = makeCombi(n, k);
		ll maxI = 0;
		ll maxX = 0;
		for(ll i = 0; i < arr.size(); i++) {
			ll xxor = arr[i][0];
			for(ll j = 1; j < arr[i].size(); j++) {
				xxor ^= arr[i][j];
			}
			if(xxor > maxX) {
				maxI = i;
				maxX = xxor;
			}
		}
		for(ll i = 0; i < arr[maxI].size(); i++) {
			cout << arr[maxI][i] << " ";
		}
		cout << "\n";
	}
	return 0;
}