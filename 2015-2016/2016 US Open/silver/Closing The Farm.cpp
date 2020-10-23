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
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

vector<bool> closed(3005 ,false);
vector<bool> visited(3005,false);
vi adj[3005];

void dfs(ll s){

	if(visited[s] == true || closed[s] == true) return;
	visited[s] = true;

	for(auto i : adj[s]) dfs(i);
}

int main(){

	freopen("closing.in","r",stdin);
	freopen("closing.out","w",stdout);

	ll n,m;
	cin in n in m;

	fo(i,0,m-1){
		ll u,v;
		cin in u in v;
		adj[u-1].pb(v-1);
		adj[v-1].pb(u-1);
	}

	dfs(0);
	bool initial = true;
	fo(i,0,n-1) {
		if(visited[i] == false){
			initial = false;
			break;
		}
	}

	if(initial == true) cout out "YES\n";
	else cout out "NO\n";

	vi cc(n+5);
	fo(i,0,n-1) {
		cin in cc[i];
		cc[i]--;
	}

	fo(oo,0,n-2){
		closed[cc[oo]] = true;

		visited.clear();
		visited.resize(3005);

		dfs(cc[n-1]);
		bool pos = true;
		fo(i,0,n-1){
			if(visited[i] == false && closed[i] == false){
				pos = false;
				break;
			}
		}

		if(pos == true) cout out "YES\n";
		else cout out "NO\n";
	}
	cin in n;
}
