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

struct Coordinate{
    ll x,y;
};

ll energy(Coordinate first , Coordinate second){
    return (first.x-second.x)*(first.x-second.x) + (first.y-second.y)*(first.y-second.y);
}

int main() {

    ll h,g;
    cin in h in g;

    vector<Coordinate> hc(h+5);
    vector<Coordinate> gc(g+5);

    fo(i,1,h) cin in hc[i].x in hc[i].y;
    fo(i,1,g) cin in gc[i].x in gc[i].y;

    ll dp[100][100][2];

    // dp[i][j][0] = minimum energy needed to visit the first i H cows and first j G cows and currently going to the ith H cow
    // dp[i][j][1] = minimum energy needed to visit the first i H cows and first j G cows and currently going to the jth G cow

    // base case :



    // recurrence :

    // answer :

    cout out dp[h][g][0];

    return 0;
}
