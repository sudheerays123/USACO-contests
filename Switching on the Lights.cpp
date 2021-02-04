// http://www.usaco.org/index.php?page=viewproblem2&cpid=570

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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

vector<vi> room(105,vi(105));
map<pair<ll,ll>,vector<pair<ll,ll>>> toggle;
vector<vector<bool>> visited(105,vector<bool>(105));

void floodfill(ll x , ll y){

    if(visited[x][y]) return;
    visited[x][y] = true;

    for(auto u : toggle[mp(x,y)]){
        room[u.first][u.second] = 1;
    }

    if(room[x+1][y] == 1) floodfill(x+1,y);
    if(room[x-1][y] == 1) floodfill(x-1,y);
    if(room[x][y-1] == 1) floodfill(x,y-1);
    if(room[x][y+1] == 1) floodfill(x,y+1);
}

int main() {

    //freopen("lightson.in","r",stdin);
    //freopen("lightson.out","w",stdout);

    ll n,m;
    cin in n in m;

    fo(i,1,m){
        ll x1,y1,x2,y2;
        cin in x1 in y1 in x2 in y2;

        toggle[mp(x1,y1)].pb(mp(x2,y2));
    }

    room[1][1] = 1;
    floodfill(1,1);

    ll cnt = 0;

    fo(i,1,n){
        fo(j,1,n){
            if(room[i][j] == 1) cnt++;
        }
    }

    cout out cnt;

    return 0;
}
