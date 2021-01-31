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

string s;

int main() {

    freopen("cow.in","r",stdin);
    freopen("cow.out","w",stdout);

    ll n;
    cin in n;
    cin in s;

    ll c = 0, co = 0 , cow = 0;

    fo(i,0,n-1){
        if(s[i] == 'C') c++;
        else if(s[i] == 'O') co += c;
        else if(s[i] == 'W') cow += co;
    }

    cout out cow nextline;

    return 0;
}
