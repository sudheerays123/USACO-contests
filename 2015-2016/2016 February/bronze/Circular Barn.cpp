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

    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);

    ll n;
    cin in n;

    vi r(n+5);
    fo(i,0,n-1) cin in r[i];

    ll ans = INF;

    fo(i,0,n-1){

        ll dist = 0;
        ll door = 1;

        fo(j,i+1,n-1){
            dist += r[j]*door;
            door++;
        }
        fo(j,0,i-1){
            dist += r[j]*door;
            door++;
        }

        mmin(ans,dist);

    }

    cout out ans;

    return 0;
}
