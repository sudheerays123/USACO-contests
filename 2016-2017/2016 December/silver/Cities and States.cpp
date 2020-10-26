#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f
#define MOD 1e9 + 7
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define foo(i,a,b,d) for(ll i = a; i <= b; i+=d)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

	freopen("citystate.in", "r", stdin);
	freopen("citystate.out", "w", stdout);

	ll n, ans = 0;

	cin in n;
	string s, t;

	map<string, ll> city;

	fo(i, 0, n - 1) {

		cin in s in t;
		s = s.substr(0, 2);

		string code = s + t;

		if (s != t)ans += city[code];
		city[t + s]++;
	}

	cout out ans;

	return 0;
}
