#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef int ll;
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

int main() {

    freopen("hopscotch.in","r",stdin);
    freopen("hopscotch.out","w",stdout);

    ll r,c,k;
    cin in r in c in k;

    vector<vi> grid(r+5,vi(c+5));

    fo(i,0,r-1){
        fo(j,0,c-1){
            cin in grid[i][j];
        }
    }

    vector<vi> dp(r+5,vi(c+5,0));

    // dp[i][j] = number of ways to come to i,j with valid path

    // base case :

    dp[0][0] = 1;
    fo(i,1,r-1) dp[i][0] = 0;
    fo(j,1,c-1) dp[0][j] = 0;

    // recurrence

    fo(i,1,r-1){
        fo(j,1,c-1){
            fo(ii,0,i-1){
                fo(jj,0,j-1){
                    if(grid[i][j] != grid[ii][jj]) dp[i][j] += dp[ii][jj];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    // answer

    cout out dp[r-1][c-1]%MOD;

    return 0;
}
