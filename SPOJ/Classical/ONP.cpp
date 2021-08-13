#include<bits/stdc++.h>
using namespace std;

int prec(char c) {
	if(c == '^') return 5;
	else if(c == '/') return 4;
	else if(c == '*') return 3;
	else if(c == '-') return 2;
	else if(c == '+') return 1;
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
		string s;
		cin >> s;
		stack<char> st;
		int l = s.length();
		string ns;
		for(int i = 0; i < l; i++) {
			if(s[i] >= 'a' && s[i] <= 'z') {
				ns += s[i];
			}
			else if(s[i] == '(') {
				st.push('(');
			}
			else if(s[i] == ')') {
				while(st.top() != 'N' && st.top() != '(') {
					char c = st.top();
					st.pop();
					ns += c;
				}
				if(st.top() == '(') {
					st.pop();
				}
			}
			else {
				while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) {
					char c = st.top();
					st.pop();
					ns += c;
				}
				st.push(s[i]);
			}
			while(st.top() != 'N') {
				char c = st.top();
				st.pop();
				ns += c;
			}
			cout << ns << endl;
		}
	}
	return 0;
}