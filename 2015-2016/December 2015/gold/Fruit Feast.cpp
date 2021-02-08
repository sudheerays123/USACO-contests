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

int main() {

    freopen("feast.in","r",stdin);
    freopen("feast.out","w",stdout);

    ll t,a,b;
    cin in t in a in b;

    vector<bool> notdrink(t+5,false);
    vector<bool> drink(t+5,false);

    notdrink[0] = true;

    fo(i,1,t){
        if(i - a >= 0 && notdrink[i-a] == true){
            notdrink[i] = true;
        }
        if(i - b >= 0 && notdrink[i-b] == true){
            notdrink[i] = true;
        }

        if(notdrink[i] == true) {
            drink[i/2] = true;
        }
    }

    fo(i,1,t){
        if(notdrink[i] == true) {
            drink[i] = true;
        }

        if(i - a >= 0 && drink[i-a] == true) {
            drink[i] = true;
        }
        if(i - b >= 0 && drink[i-b] == true) {
            drink[i] = true;
        }
    }

    ll maxt = t;
    while(drink[maxt] == false) maxt--;

    cout out maxt;

    return 0;

}
