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

	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);

	ll n;
	cin in n;

	vi indegree(n + 5);

	fo(i, 0, n - 2) {
		ll u, v;
		cin in u in v;
		indegree[u]++;
		indegree[v]++;
	}

	ll ans = -INF;

	fo(i, 1, n) mmax(ans, indegree[i]+1);

	cout out ans;

	return 0;
}