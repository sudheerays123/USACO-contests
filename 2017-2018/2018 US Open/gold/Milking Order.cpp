#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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
#define print(x) for(auto i : x ) cout out i spacef;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

vi observations[50005];
ll n;

bool doable(ll x){

    vi adj[n+5];
    vi indegree(n+5);

    fo(i,1,x){
        fo(j,1,observations[i].size()-1){
            ll last = observations[i][j-1];
            ll next = observations[i][j];

            adj[last].pb(next);
            indegree[next]++;
        }
    }

    queue<ll> q;
    fo(i,1,n) if(indegree[i] == 0) q.push(i);

    ll cnt = 0;

    while(!q.empty()){
        ll a = q.front();
        q.pop();
        cnt++;
        for(auto u : adj[a]){
            indegree[u]--;
            if(indegree[u] == 0) q.push(u);
        }
    }

    if(cnt == n) return true;
    return false;
}

vi findAns(ll x){

    vi adj[n+5];
    vi indegree(n+5);

    fo(i,1,x){
        fo(j,1,observations[i].size()-1){
            ll last = observations[i][j-1];
            ll next = observations[i][j];

            adj[last].pb(next);
            indegree[next]++;
        }
    }

    vi order(n+5);
    priority_queue<ll,vi,greater<ll>> q;
    fo(i,1,n) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    ll cnt = 0;

    while(!q.empty()){
        ll a = q.top();
        q.pop();
        cnt++;
        order[cnt] = a;
        for(auto u : adj[a]){
            indegree[u]--;
            if(indegree[u] == 0) q.push(u);
        }
    }

    return order;
}

int main() {

    freopen("milkorder.in","r",stdin);
    freopen("milkorder.out","w",stdout);

    ll m;
    cin in n in m;

    fo(i,1,m){
        ll x;
        cin in x;
        fo(j,0,x-1){
            ll y;
            cin in y;
            observations[i].pb(y);
        }
    }

    ll low = 1;
    ll high = m;
    ll ans;

    while(low <= high){

        ll mid = (low+high)/2;
        if(doable(mid) == true){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }

    vi ansorder = findAns(ans);

    fo(i,1,n) {
        if(i != n ) cout out ansorder[i] spacef;
        else cout out ansorder[i];
    }

    return 0;
}
