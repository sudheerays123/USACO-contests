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
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

struct Point{
    ll x,y;
};

bool Possible(Point first , Point second , ll power ){

    ll dist = (first.x-second.x)*(first.x-second.x) + (first.y-second.y)*(first.y-second.y);

    return dist <= power;
}

ll cnt;
vi adj[1005];
vector<bool> visited(1005,false);
vector<Point> cow(1005);
ll n;

void dfs(ll s){

    if(visited[s]) return;
    visited[s] = true;

    cnt++;

    for(auto u : adj[s]) dfs(u);
}


bool isXpossible(ll x){

    fo(i,0,n-1) adj[i].clear();

    fo(i,0,n-1){
        fo(j,0,n-1){
            if(i == j) continue;

            if(Possible(cow[i],cow[j],x) == true){
                adj[i].pb(j);
            }
        }
    }

    visited.clear();
    visited.resize(n+5,false);

    cnt = 0;

    dfs(0);

    return cnt == n;
}

int main() {

    freopen("moocast.in","r",stdin);
    freopen("moocast.out","w",stdout);

   cin in n;

   fo(i,0,n-1) cin in cow[i].x in cow[i].y;

   ll low = 1;
   ll high = 1e18;
   ll ans;

   while(low <= high){
       ll mid = (low+high)/2;

       if(isXpossible(mid) == true){
           ans = mid;
           high = mid-1;
       }
       else{
           low = mid+1;
       }
   }

   cout out ans;

    return 0;
}
