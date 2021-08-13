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

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, heroAP, heroHP, n;
	cin >> t;
	while(t--) {
		cin >> heroAP >> heroHP >> n;
		vector<int> monsAP(n);
		for(int i = 0; i < n; i++) {
			cin >> monsAP[i];
		}
		vector<int> monsHP(n);
		for(int i = 0; i < n; i++) {
			cin >> monsHP[i];
		}
		bool heroDead = false;
		for(int i = 0; i < n && heroDead == false; i++) {
			int numRoundsHAttacks = ceil(monsHP[i] / float(heroAP));
			int dmgDealt = numRoundsHAttacks * monsAP[i];
			if(heroHP - dmgDealt )
			if(heroHP <= 0) heroDead = true;
		}
		if(heroDead) {
			if(monsHP[n - 1] <= 0) cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}