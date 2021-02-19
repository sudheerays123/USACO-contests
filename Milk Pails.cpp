#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define INF 1e18
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
#define N 5005

int main() {


    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);

    ll x,y,k,m;
    cin in x in y in k in m;

    vector<vi> dist(x+5,vi(y+5,INF));

    queue<pii> q;

    q.push({0,0});
    dist[0][0] = 0;

    while(!q.empty()){
        ll i = q.front().first;
        ll j = q.front().second;

        q.pop();

        ll d = dist[i][j] + 1;
        if(d > k) continue;

        vi dx = {};
        vi dy = {};

        // fill either pail completely to the top -->

        // fill first pail

        dx.pb(x);
        dy.pb(j);

        // fill second pail

        dx.pb(i);
        dy.pb(y);

        // empty either pail -->

        // emptying first pail

        dx.pb(0);
        dy.pb(j);

        // emtpying second pail

        dx.pb(i);
        dy.pb(0);

        // pouring contents from one pail to another

        // pouring from the first pile to the second pail

        ll poury = min(j+i,y);

        dx.pb(i-poury+j);
        dy.pb(poury);

        // pouring from the second pail to the first pail

        ll pourx = min(i+j,x);

        dx.pb(pourx);
        dy.pb(j-pourx+i);

        fo(_,0,3){

            if(dist[dx[_]][dy[_]] > d){
                dist[dx[_]][dy[_]] = d;
                q.push({dx[_],dy[_]});
            }
        }

    }

    ll ans = INF;

    fo(i,0,x){
        fo(j,0,y){
            if(dist[i][j] != INF ) mmin(ans,abs(m-i-j));
        }
    }

    cout out ans;

    return 0;
}

http://www.usaco.org/index.php?page=viewproblem2&cpid=620
https://usaco.guide/solutions/usaco-620?lang=cpp
