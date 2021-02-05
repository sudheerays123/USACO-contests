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
#define print(x) for(auto i : x ) cout out i spacef;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("time.in","r",stdin);
    freopen("time.out","w",stdout);

    ll n,m,c;
    cin in n in m in c;

    vi money(n+5);
    fo(i,1,n) cin in money[i];

    vi adj[n+5];

    fo(i,0,m-1){
        ll a,b;
        cin in a in b;
        adj[b].pb(a);
    }

    vector<vi> dp(n+5,vi(1005));

    // dp[i][j] = maximum amount of money bessie can get if she is travelling for j days and going to the ith city on the jth day

    // base case :

    fo(i,2,n) {
        dp[i][0] = -INF;
    }
    dp[1][0] = 0;

    // recurrence relation :

    fo(day,1,1000){
        fo(i,1,n){
            dp[i][day] = dp[i][day-1];
            for(auto u : adj[i]) if(dp[u][day-1] != -INF ) mmax(dp[i][day],dp[u][day-1]+money[i]);
        }
    }

    // answer :

    ll ans = -INF;

    fo(day,0,1000) mmax(ans,dp[1][day] - c*day*day);

    cout out ans;

    return 0;
}
