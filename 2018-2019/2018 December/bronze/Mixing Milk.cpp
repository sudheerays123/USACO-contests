#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tiille(NULL); cout.tie(NULL);
typedef long long int ll;
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
//#define suma(a) accumulate(a[0],a[0]+n,0)
//#define all(x) (x).begin() , (x).begin() + n
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)


int main() {

    ifstream fin("mixmilk.in");
    ofstream fout("mixmilk.out");

    ll c1,a1,c2,a2,c3,a3;
    fin in c1 in a1 in c2 in a2 in c3 in a3;


    fo(i,0,32){

        // 1st pour :

        ll x = a2;
        a2 += min(a1,c2-a2);
        a1 -= min(a1,c2-x);

        ll y = a3;
        a3 += min(a2,c3-a3);
        a2 -= min(a2,c3-y);

        ll z = a1;
        a1 += min(a3,c1-a1);
        a3 -= min(a3,c1-z);
    }

    ll p = a2;
    a2 += min(a1,c2-a2);
    a1 -= min(a1,c2-p);

    fout out a1 nextline out a2 nextline out a3;

}
