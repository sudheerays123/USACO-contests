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
#define print(x) for(auto i : x ) cout out i;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    //freopen("lifeguards.in","r",stdin);
    //freopen("lifeguards.out","w",stdout);

    ll n;
    cin in n;

    vector<vi> shift(n+5,vi(3));

    fo(i,0,n-1) {
        cin in shift[i][1] in shift[i][0];
        shift[i][2] = shift[i][0]-1;
    }

    sort(shift.begin(),shift.begin()+n);

    fo(i,1,n-1) shift[i-1][0] = min(shift[i-1][0]-1,shift[i][1]-2);

    ll sum = 0 , minn = INF , removed;

    fo(i,0,n-1) {
       if(shift[i][0]-shift[i][1]+1 < minn){
           minn = shift[i][0]-shift[i][1]+1;
           removed = i;
       }
        sum += shift[i][0]-shift[i][1]+1;
    }

    sum -= minn;
    if(removed != 0 && shift[removed][2] > shift[removed][0]) sum += (shift[removed][2] - shift[removed][0]);

    cout out sum;

    return 0;
}
