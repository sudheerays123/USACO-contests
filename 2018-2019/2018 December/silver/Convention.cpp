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

vi arrival(100005);
ll n,m,c;

bool isKpossible(ll diff){

    ll pos = 1 , cnt = 0;

    while(pos <= n){
        ll remaining = c;
        cnt++;
        ll start = arrival[pos];

        while(remaining > 0 && arrival[pos] - start <= diff){
            remaining--;
            pos++;
        }
    }

    return cnt <= m;
}

int main() {

    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);

    cin in n in m in c;

    fo(i,1,n) cin in arrival[i];
    sort(arrival.begin()+1 , arrival.begin()+n+1);

    ll low = 1;
    ll high = arrival[n];
    ll ans;

    while(low <= high){

        ll mid = (low+high)/2;

        if(isKpossible(mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    cout out ans;

    return 0;

}
