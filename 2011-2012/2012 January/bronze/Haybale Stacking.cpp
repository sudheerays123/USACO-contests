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

int main() {

    ll n,q;
    cin in n in q;

    vi a(0);
    fo(i,0,n-1) a.pb(0);

    vi diff(n+5,0);

    while(q--){
        ll start , end;
        cin in start in end;

        diff[start-1]++;
        diff[end]--;
    }

    ll lastsum = 0;

    fo(i,0,n-1){
        lastsum += diff[i];
        a[i] = lastsum;
    }

    sort(a.begin(),a.end());

    cout out a[n/2];

    return 0;
}
