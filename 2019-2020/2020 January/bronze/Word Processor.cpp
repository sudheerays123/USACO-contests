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

    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);

    ll n,k;
    string s;
    ll cur = 0;

    ll cnt = 0;

    cin >> n >> k;
    for(ll i = 0; i < n; i++) {
        cin >> s;
        if (cur + s.size() <= k) {
            if(cnt >= 1) cout out " ";
            cnt++;
            cout out s;
            cur += s.size();
        } else {
            cout << "\n";
            cout << s;
            cur = s.size();
            cnt = 1;
        }
    }

    return 0;
}
