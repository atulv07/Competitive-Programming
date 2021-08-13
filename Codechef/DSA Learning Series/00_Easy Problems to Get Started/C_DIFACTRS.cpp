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

	int n;
	cin >> n;
	vector<int> divs;
	for(int i = 1; i * i < n; i++) {
		if(n % i == 0) divs.pb(i);
	}
	for(int i = sqrt(n); i >= 1; i--) {
		if(n % i == 0) divs.pb(n / i);
	}
	cout << divs.size() << "\n";
	for(int i = 0; i < divs.size(); i++) cout << divs[i] << " ";
	return 0;
}