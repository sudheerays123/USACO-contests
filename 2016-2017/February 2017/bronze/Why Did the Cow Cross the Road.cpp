#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f3f3f
#define MOD 1e9 + 7
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

int main(){

    freopen("crossroad.in","r",stdin);
    freopen("crossroad.out","w",stdout);

    ll n;
    cin in n;

    ll cnt = 0;

    vi whichside(12, INF);

    while(n--) {

        ll id, side;
        cin in id in side;
        if (whichside[id] == INF) whichside[id] = side;
        else if (whichside[id] == side) whichside[id] = side;
        else if (whichside[id] != side) {
            whichside[id] = side;
            cnt++;
        }

    }
    cout out cnt;

    return 0;
}
