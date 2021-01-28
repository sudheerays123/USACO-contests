#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

vector<vector<bool>> visited(105,vector<bool>(105,false));
vi adj[105];

void dfs(ll start , ll node){
    if(visited[start][node] == true) return;
    visited[start][node] = true;
    for(auto u : adj[node]) dfs(start,u);
}

int main() {

    freopen("factory.in","r",stdin);
    freopen("factory.out","w",stdout);

    ll n;
    cin in n;

    fo(i,0,n-2){
        ll x,y;
        cin in x in y;
        adj[x].pb(y);
    }

    fo(i,1,n) dfs(i,i);

    bool possible = false;
    ll ans;

    fo(j,1,n){
        bool pos = true;
        fo(i,1,n){
            if(visited[i][j] == false){
                pos = false;
                break;
            }
        }
        if(pos == true){
            possible = true;
            ans = j;
            break;
        }
    }

    if(possible == false) cout out "-1";
    else cout out ans;
    
    return 0;
}
