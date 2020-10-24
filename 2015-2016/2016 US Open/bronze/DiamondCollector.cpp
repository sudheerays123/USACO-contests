#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
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

int main(){

	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);

	ll n,k;
	cin in n in k;

	vi a(n+5);
	fo(i,0,n-1) cin in a[i];

	sort(a.begin(),a.begin()+n);

	ll ans = -INF;

	fo(i,0,n-1){
		if(i != 0 && a[i] == a[i-1]) continue;

		vector<ll> :: iterator up;
		up = upper_bound(a.begin()+i,a.begin()+n,a[i]+k);

		ll cnt = (up-a.begin()-i);
		mmax(ans,cnt);
	}

	cout out ans;
}
