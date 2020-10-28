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

	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);

	ll n;
	cin in n;

	vector<vi> a(n+5,vi(2));
	vi count(1005,0);

	fo(i,0,n-1){
		cin in a[i][0] in a[i][1];
		a[i][1]--;
		fo(j,a[i][0],a[i][1]) count[j]++;
	}

	ll total = 0;
	fo(i,0,1004) if(count[i] >= 1) total++;
	
	ll ans = -INF;

	fo(i,0,n-1){

		ll b = total;

		ll start = a[i][0];
		ll end = a[i][1];

		fo(j,start,end){
			if(count[j] == 1) b--;
		}

		mmax(ans,b);
	}

	cout out ans;

	return 0;
}