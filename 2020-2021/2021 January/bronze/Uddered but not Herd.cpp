#include <iostream>
#include <vector>
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

    fast;

    string bessie , john;
    cin in bessie in john;

    vi index(30);

    fo(i,0,bessie.size()-1){
        char x = bessie[i];
        ll ascii = x;
        ascii-=97;
        index[ascii] = i;
    }

    vi number(0);

    fo(i,0,john.size()-1){
        char x = john[i];
        ll ascii = x;
        ascii -= 97;
        number.pb(index[ascii]);
    }

    ll ans = 0 , i = 0;

    while(i < number.size()){
        ans++;
        ll prev = number[i];
        i++;
        while(number[i] > prev){
            prev = number[i];
            i++;
        }
    }

    cout out ans;

    return 0;
}
