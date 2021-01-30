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
#define print(x) for(auto i : x ) cout out i;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("maxcross.in","r",stdin);
    freopen("maxcross.out","w",stdout);
    
    ll n,k,b;
    cin in n in k in b;

    vi damaged(b+5);
    vi needrepair(n+5);
    fo(i,0,b-1) cin in damaged[i];

    sort(damaged.begin(),damaged.begin()+b);

    needrepair[0] = 0;
    ll ans = INF;

    fo(i,1,n){
        if(binary_search(damaged.begin(),damaged.begin()+b,i) == true) needrepair[i] = 1+needrepair[i-1];
        else needrepair[i] = needrepair[i-1];

        if(i >= k) mmin(ans,needrepair[i]-needrepair[i-k]);
    }

    cout out ans;

    return 0;
}
