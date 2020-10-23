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
//#define suma(a) accumulate(a[0],a[0]+n,0)
//#define all(x) (x).begin() , (x).begin() + n
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

bool dist(ll x1, ll y1 , ll x2 , ll y2 , ll d){
	return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) <= d*d;
}

ll cnt = 0;
vector<bool> visited(205);
vi adj[205];	

void dfs(ll s){
	if(visited[s] == true) return;
	visited[s] = true;
	cnt++;
	for(ll i : adj[s]) dfs(i);
}

int main(){

	freopen("moocast.in","r",stdin);
	freopen("moocast.out","w",stdout);

	ll n;
	cin in n;

	vector<vi> a(n+5,vi(3));
	
	fo(i,0,n-1) cin in a[i][0] in a[i][1] in a[i][2];
	
	fo(i,0,n-1){
		fo(j,i+1,n-1){
			if(dist(a[i][0],a[i][1],a[j][0],a[j][1],a[i][2]) == true) adj[i].pb(j);
			if(dist(a[i][0],a[i][1],a[j][0],a[j][1],a[j][2]) == true) adj[j].pb(i);
		}
	}

	ll ans = -INF;

	fo(i,0,n-1){
		cnt = 0;
		visited.clear();
		visited.resize(205);
		dfs(i);
		mmax(ans,cnt);
	}

	cout out ans;

}
