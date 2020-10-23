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

vector<bool> visited(100005);
vi adj[100005];
vector<vi> coordinates(100005,vi(2));

ll minh = INF , minv = INF;
ll maxh = -INF , maxv = -INF;

void dfs(ll s){

	if(visited[s] == true) return;
	visited[s] = true;

	mmin(minh,coordinates[s][0]);
	mmax(maxh,coordinates[s][0]);
	mmin(minv,coordinates[s][1]);
	mmax(maxv,coordinates[s][1]);

	for(auto i : adj[s]) dfs(i);
}

int main(){

	freopen("fenceplan.in","r",stdin);
	freopen("fenceplan.out","w",stdout);

	ll n,m;
	cin in n in m;


	fo(i,0,n-1) cin in coordinates[i][0] in coordinates[i][1];
	fo(i,0,m-1){
		ll x,y;
		cin in x in y;
		adj[x-1].pb(y-1);
		adj[y-1].pb(x-1);
	}

	ll ans = INF;

	fo(i,0,n-1){

		if(visited[i] == true) continue;

		minh = INF , minv = INF;
		maxh = -INF , maxv = -INF;
		dfs(i);

		ll perimeter = (maxh - minh)*2 + (maxv-minv)*2;

		mmin(ans,perimeter);
	}

	cout out ans;
	
}
