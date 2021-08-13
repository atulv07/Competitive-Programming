#include<bits/stdc++.h>
using namespace std;

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
		int n,k;
		cin >> n >> k;
		int a[n], f[k + 2] = {0}, ans = 1, cnt = 1, l = 0,r = 0,x;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		f[a[l]]++;
		while(r < n - 1) {
			if(cnt < k) {
				r++;
				f[a[r]]++;
				if(f[a[r]]==1)
					cnt++;
			}
			else {
				l++;
				f[a[l-1]]--;
				if(f[a[l-1]]==0)
					cnt--;
			}
			if(cnt < k) {
				ans = max(ans, (r - l) + 1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}