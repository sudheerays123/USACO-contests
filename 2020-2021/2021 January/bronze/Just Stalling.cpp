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

    fast;

    ll n;
    cin in n;

    vi height(n+5);
    fo(i,0,n-1) cin in height[i];
    vi maxheight(n+5);
    fo(i,0,n-1) cin in maxheight[i];

    sort(height.rbegin(),height.rend());

    ll ans = 1;

    fo(i,0,n-1){
        ll possible = 0;
        fo(j,0,n-1){
            if(height[i] <= maxheight[j]) possible++;
        }
        possible -= i;
        ans *= possible;
    }

    cout out ans;

    return 0;
}
