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

	freopen("promote.in","r",stdin);
	freopen("promote.out","w",stdout);

	ll beforeb , afterb , befores , afters , beforeg , afterg, beforep , afterp;
	cin in beforeb in afterb in befores in afters in beforeg in afterg in beforep in afterp;

	ll goldToPlatinum = afterp - beforep;
	ll silverToGold = afterp - beforep + afterg - beforeg;
	ll bronzeToSilver = afterp - beforep + afterg - beforeg + afters - befores;

	cout out bronzeToSilver nextline out silverToGold nextline out goldToPlatinum;

}
