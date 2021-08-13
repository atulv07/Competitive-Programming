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

class TrieNode {
public:
	vector<TrieNode*> children;
	bool isEndOfWord;
	TrieNode() {
		isEndOfWord = false;
		children.resize(26, NULL);
	}
};

TrieNode* root;

void insert(string s) {
	TrieNode* temp = root;
	for(int i = 0; i < s.size(); i++) {
		int idx = s[i] - 'a';
		if(temp->children[idx] == NULL)
			temp->children[idx] = new TrieNode();
		temp = temp->children[idx];
	}
	temp->isEndOfWord = true;
}

bool search(string s) {
	TrieNode* temp = root;
	for(int i = 0; i < s.size(); i++) {
		int idx = s[i] - 'a';
		if(temp->children[idx] == NULL)
			return false;
		temp = temp->children[idx];
	}
	return (temp != NULL && temp->isEndOfWord);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	vector<string> keys = {"the", "a", "there", "answer", "any", "by", "bye", "their"};
	int n = keys.size();
	root = new TrieNode();
	for(int i = 0; i < n; i++)
		insert(keys[i]);
	for(int i = 0; i < n; i++)
		cout << search(keys[i]) << "\n";
	return 0;
}