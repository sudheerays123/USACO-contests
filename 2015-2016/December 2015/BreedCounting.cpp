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

	freopen("bcount.in","r",stdin);
	freopen("bcount.out","w",stdout);

	ll n,q;
	cin in n in q;

	vi a(n+5);
	fo(i,0,n-1) cin in a[i];

	vector<vi> pre(n+5,vi(4,0));

	if(a[0] == 1) pre[0][1] = 1;
	if(a[0] == 2) pre[0][2] = 1;
	if(a[0] == 3) pre[0][3] = 1;

	fo(i,1,n-1){
		if(a[i] == 1){
			pre[i][1] = pre[i-1][1] + 1;
			pre[i][2] = pre[i-1][2];
			pre[i][3] = pre[i-1][3];
		}
		if(a[i] == 2){
			pre[i][2] = pre[i-1][2] + 1;
			pre[i][1] = pre[i-1][1];
			pre[i][3] = pre[i-1][3];
		}
		if(a[i] == 3){
			pre[i][3] = pre[i-1][3] + 1;
			pre[i][1] = pre[i-1][1];
			pre[i][2] = pre[i-1][2];
		}
	}
	while(q--){
		ll a,b;
		cin in a in b;
		a--;b--;

		if(a == 0) cout out pre[b][1] space pre[b][2] space pre[b][3] nextline;
		else cout out pre[b][1]-pre[a-1][1] space pre[b][2]-pre[a-1][2] space pre[b][3]-pre[a-1][3] nextline;
	}
}
