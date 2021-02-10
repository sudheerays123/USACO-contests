#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
#define MOD 13371337
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
#define N 200005

int main() {

    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);

    ll n;
    cin in n;

    vi adj[n+5];

    fo(i,0,n-2){
        ll a,b;
        cin in a in b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    ll ans = -INF;

    fo(i,1,n){
        ll s = adj[i].size()+1;
        mmax(ans,s);
    }

    cout out ans;

    return 0;
}
