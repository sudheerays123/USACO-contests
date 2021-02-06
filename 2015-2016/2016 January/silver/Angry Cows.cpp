#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

ll n,k;
vi x(50005);

bool isRpossible(ll r){

    ll cnt = 0 , diff = 2*r,pos = 0;

    while(pos < n){
        cnt++;
        ll start = x[pos];
        while(pos < n && x[pos] - start <= diff) pos++;
    }

    return cnt <= k;
}

int main() {

    freopen("angry.in","r",stdin);
    freopen("angry.out","w",stdout);

    cin in n in k;

    fo(i,0,n-1) cin in x[i];

    sort(x.begin(),x.begin()+n);

    ll low = 0;
    ll high = x[n-1];
    ll ans;

    while(low <= high){

        ll mid = (low+high)/2;

        if(isRpossible(mid)){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
    }

    cout out ans;

    return 0;

}
