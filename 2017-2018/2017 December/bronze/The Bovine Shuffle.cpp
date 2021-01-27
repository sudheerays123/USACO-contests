#include <iostream>
#include <vector>
#include <algorithm>
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
#define print(x) for(auto i : x ) cout out i.first space i.second nextline
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);

    ll n;
    cin in n;

    vi a(n+5);
    vi parent(n+5);

    fo(i,1,n) {
        cin in a[i];
        parent[a[i]] = i;
    }

    vi id(n+5);

    fo(i,1,n) cin in id[i];

    vi ans(n+5);

    fo(i,1,n){
        ll start = i;
        start = parent[i];
        start = parent[start];
        start = parent[start];
        ans[start] = id[i];
    }

    fo(i,1,n) cout out ans[i] nextline;

    return 0;
}
