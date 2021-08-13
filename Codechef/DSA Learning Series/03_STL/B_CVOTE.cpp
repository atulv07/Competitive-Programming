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

	int n, m;
	string a, b;
	cin >> n >> m;
	unordered_map<string, string> chefToCountry;
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		chefToCountry[a] = b;
	}
	unordered_map<string, int> chefToVote;
	unordered_map<string, int> countryToVote;
	int maxVotesToChef = 0;
	int maxVotesToCountry = 0;
	string chefWithMaxVote = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
	string countryWithMaxVote = chefWithMaxVote;
	for(int i = 0; i < m; i++) {
		string chef;
		cin >> chef;
		string country = chefToCountry[chef];

		if(chefToVote.find(chef) == chefToVote.end()) chefToVote[chef] = 0;
		chefToVote[chef] += 1;

		if(countryToVote.find(country) == countryToVote.end()) countryToVote[country] = 0;
		countryToVote[country] += 1;

		if(chefToVote[chef] == maxVotesToChef) chefWithMaxVote = min(chefWithMaxVote, chef);
		if(chefToVote[chef] > maxVotesToChef) {
			maxVotesToChef = chefToVote[chef];
			chefWithMaxVote = chef;
		}

		if(countryToVote[country] == maxVotesToCountry) countryWithMaxVote = min(countryWithMaxVote, country);
		if(countryToVote[country] > maxVotesToCountry) {
			maxVotesToCountry = countryToVote[country];
			countryWithMaxVote = country;
		}
	}
	cout << countryWithMaxVote << "\n";
	cout << chefWithMaxVote << "\n";
	return 0;
}