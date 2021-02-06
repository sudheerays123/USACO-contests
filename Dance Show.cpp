#include <bits/stdc++.h>
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

ll n,t;
vi d(100005);

bool isKpossible(ll k){

    ll timeneeded = 0;

    priority_queue<ll,vi,greater<>> q;

    fo(i,1,n){

        if(q.size() == k){
            timeneeded = q.top();
            q.pop();
        }

        if(timeneeded + d[i] > t ) return false;
        q.push(d[i] + timeneeded);

    }

    return timeneeded <= t;
}

int main() {

    freopen("cowdance.in","r",stdin);
    freopen("cowdance.out","w",stdout);

    cin in n in t;

    fo(i,1,n) cin in d[i];

    ll low = 1;
    ll high = n;

    ll ans;

    while(low <= high){

        ll mid = (low+high)/2;

        if(isKpossible(mid)){
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }

    cout out ans;

    return 0;

}
