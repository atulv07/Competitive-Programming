#include<bits/stdc++.h>
using namespace std;

const int N = 100001;
int n;
int arr[N];
bool used[N];
pair<int, int> b[N], c[N];

void goB(int v) {
	if (used[v]) return;
	used[v] = true;
	goB(b[v].second);
}
void goC(int v) {
	if (used[v]) return;
	used[v] = true;
	goC(c[v].second);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		b[i] = c[i] = make_pair(arr[i], i);
	}
	sort(b, b + n);
	sort(c, c + n);
	reverse(c, c + n);
	for(int i = 0; i < n; i++) {
		used[i] = false;
	}
	int ans1 = 0;
	for(int i = 0; i < n; i++) {
		if(!used[i]) {
			ans1++;
			goB(i);
		}
	}
	
	for(int i = 0; i < n; i++) {
		used[i] = false;
	}
	int ans2 = 0;
	for(int i = 0; i < n; i++) {
		if(!used[i]) {
			ans2 += 1;
			goC(i);
		}
	}
	cout << min(n - ans1, n - ans2);
	return 0;
}