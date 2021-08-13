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
	int minn = 1;
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) cout << minn << " "<< minn + 1 << " "<< minn + 2 << " "<< minn + 3 << " "<< minn + 4 << "\n";
		else cout << minn + 4 << " "<< minn + 3 << " "<< minn + 2 << " "<< minn + 1 << " "<< minn << "\n";
		minn += 5;
	}
	return 0;
}