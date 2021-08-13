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

	int t, n, x, y;
	cin >> t;
	while(t--) {
		cin >> n >> x >> y;
		int tempN = n;
		while((x + (tempN - 1) * ((y - x) / (tempN - 1))) != y) {
			tempN -= 1;
		}
		n -= tempN;
		int z = (y - x) / (tempN - 1);
		cout << x << " " << y << " ";
		int tempX = x + z;
		while(tempX != y) {
			cout << tempX << " ";
			tempX += z;
		}
		while(n > 0 && x - z > 0) {
			cout << x - z << " ";
			x -= z;
			n -= 1;
		}
		while(n > 0) {
			cout << y + z << " ";
			y += z;
			n -= 1;
		}
		cout << "\n";
	}
	return 0;
}