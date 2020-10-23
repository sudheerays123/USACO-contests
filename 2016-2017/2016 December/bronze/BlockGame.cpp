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

	freopen("blocks.in","r",stdin);
	freopen("blocks.out","w",stdout);

	ll n;
	cin in n;

	vi m(26);

	fo(i,0,n-1){
		string s,v;
		cin in s in v;

		vi ss(26);
		vi vv(26);

		fo(i,0,s.size()-1){
			ll x = (int) s[i] - 97;
			ss[x]++;
		}
		fo(i,0,v.size()-1){
			ll x = (int) v[i] - 97;
			vv[x]++;
		}

		fo(i,0,25) m[i] += max(ss[i],vv[i]);
	}

	fo(i,0,25) cout out m[i] nextline;
}
