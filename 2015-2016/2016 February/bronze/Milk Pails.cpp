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

	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);

	ll x,y,m;
	cin in x in y in m;

	vi dp(m+5,INF);

	dp[x] = 1;
	dp[y] = 1;

	fo(i,x+1,m) if(dp[i-x] != INF || (i >= y && dp[i-y] != INF ) || i == y ) dp[i] = 1;

	while(dp[m] == INF) m--;
	cout out m;

	return 0;
}
