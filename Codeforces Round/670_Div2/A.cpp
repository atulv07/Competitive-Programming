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

	int t, n, a;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> arr(110, 0);
		for(int i = 0; i < n; i++) {
			cin >> a;
			arr[a] += 1;
		}
		int i = 0;
		while(arr[i] >= 1) {
			arr[i] -= 1;
			i += 1;
		}
		a = i;
		i = 0;
		while(arr[i] >= 1) {
			i += 1;
		}
		cout << a + i << "\n";
	}
	return 0;
}