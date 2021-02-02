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

    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);

    ll n,k;
    cin in n in k;

    vector<char> a(n+5);
    fo(i,1,n) cin in a[i];

    vector<vector<vi>> dp(n+5,vector<vi>(k+5,vi(3)));

    // dp[i][j][0] = maximum score possible if we consider first i and k <= j and ending with hoof
    // dp[i][j][1] = maximum score possible if we consider first i and k <= j and ending with paper
    // dp[i][j][2] = maximum score possible if we consider first i and k <= j and ending with scissors

    // base case :

    fo(i,1,n){
        if(a[i] == 'P'){
            dp[i][0][0] = dp[i-1][0][0];
            dp[i][0][1] = dp[i-1][0][1];
            dp[i][0][2] = dp[i-1][0][2]+1;
        }
        if(a[i] == 'H'){
            dp[i][0][0] = dp[i-1][0][0];
            dp[i][0][1] = dp[i-1][0][1]+1;
            dp[i][0][2] = dp[i-1][0][2];
        }
        if(a[i] == 'S'){
            dp[i][0][0] = dp[i-1][0][0]+1;
            dp[i][0][1] = dp[i-1][0][1];
            dp[i][0][2] = dp[i-1][0][2];
        }
    }

    fo(j,1,k) {
        dp[1][j][0] = dp[1][j-1][0];
        dp[1][j][1] = dp[1][j-1][1];
        dp[1][j][2] = dp[1][j-1][2];
    }

    // recurrence :

    fo(i,2,n){
        fo(j,1,k){
            if(a[i] == 'P'){
                dp[i][j][0] = max(dp[i][j-1][0],max(dp[i-1][j][0],max(dp[i-1][j-1][1],dp[i-1][j-1][2])));
                dp[i][j][1] = max(dp[i][j-1][1],max(dp[i-1][j][1],max(dp[i-1][j-1][0],dp[i-1][j-1][2])));
                dp[i][j][2] = max(dp[i][j-1][2],max(dp[i-1][j][2],max(dp[i-1][j-1][0]+1,max(dp[i-1][j-1][1]+1,dp[i-1][j][2]+1))));
            }
            if(a[i] == 'H'){
                dp[i][j][0] = max(dp[i][j-1][0],max(dp[i-1][j][0],max(dp[i-1][j-1][1],dp[i-1][j-1][2])));
                dp[i][j][1] = max(dp[i][j-1][1],max(dp[i-1][j][1],max(dp[i-1][j-1][0]+1,max(dp[i-1][j-1][2]+1,dp[i-1][j][1]+1))));
                dp[i][j][2] = max(dp[i][j-1][2],max(dp[i-1][j][2],max(dp[i-1][j-1][0],dp[i-1][j-1][1])));
            }
            if(a[i] == 'S'){
                dp[i][j][0] = max(dp[i][j-1][0],max(dp[i-1][j][0],max(dp[i-1][j-1][1]+1,max(dp[i-1][j-1][2]+1,dp[i-1][j][0]+1))));
                dp[i][j][1] = max(dp[i][j-1][1],max(dp[i-1][j][1],max(dp[i-1][j-1][0],dp[i-1][j-1][2])));
                dp[i][j][2] = max(dp[i][j-1][2],max(dp[i-1][j][2],max(dp[i-1][j-1][0],dp[i-1][j-1][1])));
            }
        }
    }

    // answer :

    cout out max(dp[n][k][0],max(dp[n][k][1],dp[n][k][2]));

    return 0;
}
