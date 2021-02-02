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

struct Coordinate{
    ll x,y;
};

ll energy(Coordinate first , Coordinate second){
    return (first.x-second.x)*(first.x-second.x) + (first.y-second.y)*(first.y-second.y);
}

int main() {

    freopen("checklist.in","r",stdin);
    freopen("checklist.out","w",stdout);

    ll h,g;
    cin in h in g;

    vector<Coordinate> hc(h+5);
    vector<Coordinate> gc(g+5);

    fo(i,1,h) cin in hc[i].x in hc[i].y;
    fo(i,1,g) cin in gc[i].x in gc[i].y;

    vector<vector<vi>> dp(h+5,vector<vi>(g+5,vi(2,INF)));

    // dp[i][j][0] = minimum energy needed to visit the first i H cows and first j G cows and currently going to the ith H cow
    // dp[i][j][1] = minimum energy needed to visit the first i H cows and first j G cows and currently going to the jth G cow

    // base case :

    dp[1][0][0] = 0;

    // recurrence :

    fo(i,1,h){
        fo(j,0,g){
            if(dp[i][j][0] != INF) continue;
            dp[i][j][0] = min(dp[i-1][j][0] + energy(hc[i],hc[i-1]) , dp[i-1][j][1] + energy(hc[i],gc[j]));
            if(j != 0) dp[i][j][1] = min(dp[i][j-1][0] + energy(hc[i],gc[j]) , dp[i][j-1][1] + energy(gc[j],gc[j-1]));
        }
    }


    // answer :

    cout out dp[h][g][0];

    return 0;
}
