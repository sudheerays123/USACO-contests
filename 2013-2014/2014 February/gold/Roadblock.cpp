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

ll n;
vector<vi> adj(255,vi(255));
vi dist(255);

void dijkstra(ll start){

	fo(i,0,n-1) dist[i] = INF;
	vector<bool> visited(n+5,false);
	priority_queue<pair<ll,ll>> q;

	q.push({0,start});
	dist[start] = 0;

	while(!q.empty()){

		ll u = q.top().second;
		q.pop();

		if(visited[u] == true) continue;
		visited[u] = true;

		fo(j,0,n-1){
			if(adj[u][j] == 0) continue;

			ll a = u;
			ll b = j;
			ll w = adj[a][b];

			if(dist[b] > dist[a]+w){
				dist[b] = dist[a]+w;
				q.push(mp(-dist[b],b));
			}
		}
	} 
}

int main() {

	freopen("rblock.in", "r", stdin);
	freopen("rblock.out", "w", stdout);

	ll m;
	cin in n in m;

	vector<vi> a(m+5,vi(2));

	fo(i,0,m-1){
		ll x;
		cin in a[i][0] in a[i][1] in x;

		a[i][0]--;a[i][1]--;

		adj[a[i][0]][a[i][1]] = x;
		adj[a[i][1]][a[i][0]] = x;
	}

	dijkstra(0);
	ll initiald = dist[n-1];

	ll maxdist = -INF;

	fo(i,0,m-1){
		adj[a[i][0]][a[i][1]] *= 2;
		adj[a[i][1]][a[i][0]] *= 2;

		dijkstra(0);
		mmax(maxdist,dist[n-1]);

		adj[a[i][0]][a[i][1]] /= 2;
		adj[a[i][1]][a[i][0]] /= 2;
	}

	cout out maxdist - initiald;

	return 0;
}
