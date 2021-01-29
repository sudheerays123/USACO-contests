#include <iostream>
#include <vector>
#include <set>
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

int main() {

    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);

    ll xb , yb , xl , yl,xr,yr;

    fo(i,0,9){
        string s;
        cin in s;
        fo(j,0,9){
            if(s[j] == 'L'){
                xl = i;
                yl = j;
            }
            if(s[j] == 'B'){
                xb = i;
                yb = j;
            }
            if(s[j] == 'R'){
                xr = i;
                yr = j;
            }
        }
    }

    if(xb != xl && yb != yl ) cout out (abs(xb-xl)+abs(yb-yl))-1;
    if(xb == xl && yb != yl) {
        if(xr == xb && ((yl < yr && yr< yb)||(yb < yr && yr < yl))) cout out (abs(xb-xl)+abs(yb-yl))-1 +2;
        else cout out  (abs(xb-xl)+abs(yb-yl))-1;
    }
    if(xb != xl && yb == yl) {
        if(yr == yb && ((xl < xr && xr < xb)||(xb < xr && xr < xl))) cout out (abs(xb-xl)+abs(yb-yl))-1 +2;
        else cout out (abs(xb-xl)+abs(yb-yl))-1;
    }

    return 0;
}
