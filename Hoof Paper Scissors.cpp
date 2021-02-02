#include <iostream>
#include <vector>
#include <algorithm>
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

    ll n,k;
    cin in n in k;

    vector<string> a(n+5);
    fo(i,1,n) cin in a[i];

    vector<vector<vi>> dp(n+5,vector<vi>(k+5,vi(3)));

    // dp[i][j][0] = maximum score possible if we consider first i and k <= j and ending with hoof
    // dp[i][j][1] = maximum score possible if we consider first i and k <= j and ending with paper
    // dp[i][j][2] = maximum score possible if we consider first i and k <= j and ending with scissors

    // base case :

    // recurrence :

    // answer :



    return 0;
}
