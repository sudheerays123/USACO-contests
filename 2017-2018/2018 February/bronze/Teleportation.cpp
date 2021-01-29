#include <iostream>
#include <vector>
#include <set>
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

int main() {

    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);

    ll a,b,x,y;
    cin in a in b in x in y;

    ll ans = INF;

    // not using teleport :

    mmin(ans,abs(b-a));

    // using teleport from x to y

    mmin(ans,abs(x-a)+abs(b-y));

    // using teleport from y to x

    mmin(ans , abs(y-a)+abs(x-b));

    cout out ans;

    return 0;
}
