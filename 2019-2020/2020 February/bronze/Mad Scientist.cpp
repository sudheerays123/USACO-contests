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

int main() {

	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);

	ll n;
	cin in n;

	string a,b;
	cin in a in b;

	ll ans = 0;

	for(ll i = 0;i < n;){
		if(a[i] == b[i]){
			i++;
			continue;
		}

		ans++;
		while(a[i] != b[i]){
			i++;
		}
	}
	
	cout out ans;
}
