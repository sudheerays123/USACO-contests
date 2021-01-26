#include <bits/stdc++.h>
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

    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);

    ll n,q;
    cin in n in q;

    vi a(n+5);
    fo(i,0,n-1) cin in a[i];

    sort(a.begin(),a.begin()+n);

    while(q--){
        ll l,h;
        cin in l in h;

        vi :: iterator  low = lower_bound(a.begin(),a.begin()+n,l);
        ll start = low-a.begin();

        vi :: iterator  up = upper_bound(a.begin(),a.begin()+n,h);
        ll end = up-a.begin();

        cout out end-start nextline;

    }

    return 0;
}
