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
#define print(x) for(auto i : x ) cout out i;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("div7.in","r",stdin);
    freopen("div7.out","w",stdout);

    ll n;
    cin in n;

    vi a(n+5);
    vi presum(n+5);
    vi last(n+5,INF);
    ll ans = -INF;

    fo(i,1,n) {
        cin in a[i];
        presum[i] = presum[i-1]+a[i];
        presum[i] %= MOD;
        mmin(last[presum[i]],i);
        if(last[presum[i]] != i) mmax(ans,i-last[presum[i]]);
    }

    cout out ans;

    return 0;
}
