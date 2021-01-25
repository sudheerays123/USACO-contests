#include <iostream>
#include <vector>
#include<unordered_set>
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

    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    ll a,b,c,d;
    cin in a in b in c in d;

    if(b <= c || d <= a) cout out b-a+d-c;

    else if(a <= c && c <= b && b <= d) cout out d-a;
    else if(a <= c && d <= b) cout out b-a;

    else if(c <= a && a <= d && d <= b) cout out b-c;
    else if(c <= a && b <= d) cout out d-c;

    return 0;
}
