#include <bits/stdc++.h>
using namespace std;
typedef int ll;
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

ll n;
vector<vi> a(105,vi(2));

ll score(ll sci , ll hoof , ll paper){

	ll total = 0;

	fo(i,0,n-1){
		if(a[i][0] == sci && a[i][1] == paper) total++;
		else if(a[i][0] == hoof && a[i][1] == sci) total++;
		else if(a[i][0] == paper && a[i][1] == hoof) total++;
	}

	return total;
}

int main() {

	freopen("hps.in","r",stdin);
	freopen("hps.out","w",stdout);

	cin in n;

	fo(i,0,n-1) cin in a[i][0] in a[i][1];

	ll ans = -INF;

	mmax(ans,score(1,2,3));
	mmax(ans,score(1,3,2));
	mmax(ans,score(2,3,1));
	mmax(ans,score(2,1,3));
	mmax(ans,score(3,1,2));
	mmax(ans,score(3,2,1));

	cout out ans;

	return 0;
}
