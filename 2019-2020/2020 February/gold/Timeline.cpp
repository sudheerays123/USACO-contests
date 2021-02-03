#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
#define MOD 7
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("timeline.in","r",stdin);
    freopen("timeline.out","w",stdout);

    ll n,m,c;
    cin in n in m in c;

    vi earliestdate(n+5);
    vi date(n+5);

    fo(i,1,n) {
        cin in earliestdate[i];
        date[i] = earliestdate[i];
    }

    vector<pair<ll,ll>> adj[n+5];
    vi indegree(n+5);

    fo(i,1,c){
        ll a,b,x;
        cin in a in b in x;
        adj[a].pb(mp(b,x));
        indegree[b]++;
    }

    queue<ll> q;

    fo(i,1,n){
        if(indegree[i] == 0){
            q.push(i);
            date[i] = earliestdate[i];
        }
    }

    while(!q.empty()){
        ll a = q.front();
        q.pop();
        for(auto u : adj[a]){
            mmax(date[u.first],date[a]+u.second);
            indegree[u.first]--;
            if(indegree[u.first] == 0) q.push(u.first);
        }
    }

    fo(i,1,n) cout out date[i] nextline;

    return 0;
}
