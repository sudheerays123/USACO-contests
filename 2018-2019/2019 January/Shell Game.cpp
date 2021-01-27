#include <iostream>
#include <vector>
#include <algorithm>
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
#define print(x) for(auto i : x ) cout out i.first space i.second nextline
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

vector<vi> shift(105,vi(3));

ll guess(ll guessedpos , ll n){

    ll score = 0;

    vi pos(4);
    fo(i,1,3) pos[i] = i;

    fo(i,0,n-1){
        ll a,b,guess;
        a = shift[i][0];
        b = shift[i][1];
        guess = shift[i][2];

        swap(pos[a],pos[b]);
        if(pos[guess] == guessedpos) score++;
    }

    return score;
}

int main() {

    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);

    ll n;
    cin in n;

    fo(i,0,n-1) cin in shift[i][0] in shift[i][1] in shift[i][2];

    ll ans = -INF;

    fo(i,1,3) mmax(ans,guess(i , n));

    cout out ans;

    return 0;
}
