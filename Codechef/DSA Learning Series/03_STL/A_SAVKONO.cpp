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

	int t, n, z, a;
	cin >> t;
	while(t--) {
		cin >> n >> z;
		priority_queue<int> pq;
		for(int i = 0; i < n; i++) {
			cin >> a;
			pq.push(a);
		}
		int cnt = 0;
		while(z > 0 && pq.top() > 0) {
			int top = pq.top();
			pq.pop();
			z -= top;
			cnt += 1;
			pq.push(top / 2);
		}
		if(z <= 0) cout << cnt << "\n";
		else cout << "Evacuate\n";
	}
	return 0;
}