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

	int b, s, p;
	cin >> b >> s >> p;
	vector<int> shirts(s);
	vector<int> pants(p);
	for(int i = 0; i < s; i++) cin >> shirts[i];
	for(int i = 0; i < p; i++) cin >> pants[i];
	sort(all(shirts));
	sort(all(pants));
	int maxP = INT_MIN;
	for(int i = 0; i < s && shirts[i] < b; i++) {
		int j = 0;
		while(j < p && pants[j] < b) {
			if(shirts[i] + pants[j] <= b) {
				maxP = max(maxP, shirts[i] + pants[j]);
			}
		}
	}
	if(maxP == INT_MIN) cout << -1;
	else cout << maxP;
	return 0;
}