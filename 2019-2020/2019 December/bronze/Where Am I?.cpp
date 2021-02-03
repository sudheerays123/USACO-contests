#include <iostream>
#include <algorithm>
#include <unordered_set>
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
#define print(x) for(auto i : x ) cout out i spacef;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);

    ll n;
    cin in n;

    string s;
    cin in s;

    fo(k,1,n){
        unordered_set<string> farm;
        fo(i,0,n-k){
            string u;
            fo(j,i,i+k-1){
                u.pb(s[j]);
            }
            farm.insert(u);
        }

        if(farm.size() == n-k+1){
            cout out k;
            break;
        }
    }
    return 0;
}
