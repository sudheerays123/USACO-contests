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

bool cov(ll x,ll y,ll x1,ll y1, ll x2 , ll y2){
	return x1 <= x && x2 >= x && y1 <= y && y2 >= y;
}

int main() {

	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);

	ll x1,y1,x2,y2,x3,y3,x4,y4;
	cin in x1 in y1 in x2 in y2 in x3 in y3 in x4 in y4;

	ll covered = 0;

	if(cov(x1,y1,x3,y3,x4,y4) == true) covered++;
	if(cov(x1,y2,x3,y3,x4,y4) == true) covered++;
	if(cov(x2,y2,x3,y3,x4,y4) == true) covered++;
	if(cov(x2,y1,x3,y3,x4,y4) == true) covered++;

	ll area =  abs(x2-x1)*abs(y2-y1);

	if(covered <= 1) cout out area;
	else if(covered <= 3) {
		ll xL = max(x1, x3);
		ll xR = min(x2, x4);
		ll yL = max(y1, y3);
		ll yR = min(y2, y4);

		cout out area-(abs(xR-xL)*abs(yR-yL));
	}
	else cout out 0;

	return 0;
}
