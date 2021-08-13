#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
	if(c == '^') return 3;
	else if(c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1;
	else return -1;
} 

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
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack<char> stackk;
		string ns;
		stackk.push('a');
		for(int i = 0; i < n; i++) {
			if(s[i] >= 'A' && s[i] <= 'Z'){
				ns += s[i];
			}
			else if(s[i] == '(') {
				stackk.push('(');
			}
			else if(s[i] == ')') {
				while(stackk.top() != 'a' && stackk.top() != '(') {
					char c = stackk.top();
					stackk.pop();
					ns += c;
				}
				if(stackk.top() == '(') {
					char c = stackk.top();
					stackk.pop();
				}
			}
			else{
				while(stackk.top() != 'N' && prec(s[i]) <= prec(stackk.top())) {
					char c = stackk.top();
					stackk.pop();
					ns += c;
				}
				stackk.push(s[i]);
			}
		}
		while(stackk.top() != 'a') {
			char c = stackk.top();
			stackk.pop();
			ns += c;
		}
		cout << ns << endl;
	}
	return 0;
}