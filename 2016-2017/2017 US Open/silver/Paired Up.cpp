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
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("pairup.in","r",stdin);
    freopen("pairup.out","w",stdout);

    ll n;
    cin in n;

    vector<vi> milk(n+5,vi(2));

    fo(i,0,n-1){
        ll x,y;
        cin in x in y;

        milk[i][0] = y;
        milk[i][1] = x;
    }

    sort(milk.begin(),milk.begin()+n);

    ll mintime = 0;

    ll low = 0;
    ll high = n-1;

    while(low <= high){

        if(milk[low][1] <= 0) low++;
        if(milk[high][1] <= 0) high--;

        if(low > high) break;

        mmax(mintime,milk[low][0]+milk[high][0]);

        //ll mincow = min(milk[low][1],milk[high][1]);
        
        milk[low][1] -= mincow;
        milk[high][1] -= mincow;

        /*
        if(milk[low][1] > milk[high][1]){
             milk[low][1] -= milk[high][1];
        }
        else milk[high][1] -= milk[low][1];
        */
        
    }

    cout out mintime;

    return 0;
}
