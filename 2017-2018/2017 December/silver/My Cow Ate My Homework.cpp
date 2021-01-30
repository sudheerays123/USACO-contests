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

    freopen("homework.in","r",stdin);
    freopen("homework.out","w",stdout);

    ll n;
    cin in n;

    vi a(n+5);
    fo(i,0,n-1) cin in a[i];

    vi presum(n+5);
    vi premin(n+5);

    for(ll i = n-1; i >= 0; i--){
        if(i == n-1){
            presum[i] = a[i];
            premin[i] = a[i];
        }
        else{
            presum[i] = presum[i+1]+a[i];
            premin[i] = min(premin[i+1],a[i]);
        }
    }

    double maxav = -INF;

    fo(i,0,n-3){
        double thisav = (double)(presum[i+1]-premin[i+1]) / (double)(n-i-2);
        mmax(maxav,thisav);
    }

    fo(i,0,n-3){
        double thisav = (double)(presum[i+1]-premin[i+1]) / (double)(n-i-2);
        if(thisav == maxav) cout out i+1 nextline;
    }

    return 0;
}
