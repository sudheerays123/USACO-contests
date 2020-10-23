#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tiille(NULL); cout.tie(NULL);
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
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main(){

	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);

	ll x1,y1,x2,y2;
	ll x3,y3,x4,y4;

	cin in x1 in y1 in x2 in y2 in x3 in y3 in x4 in y4;

	ll maxh = max(max(x1,x2),max(x3,x4));
	ll minh = min(min(x1,x2),min(x3,x4));

	ll maxv = max(max(y1,y2),max(y3,y4));
	ll minv = min(min(y1,y2),min(y3,y4));

	ll side = max(maxh-minh,maxv-minv);
	
	cout out side*side;
}
