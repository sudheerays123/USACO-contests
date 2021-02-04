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
#define print(x) for(auto i : x ) cout out i spacef;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

vector<vector<char>> grid(1005,vector<char>(1005,'.'));
vector<vector<bool>> visited(1005,vector<bool>(1005));
ll area , perimeter;

void floodFill(ll x , ll y){

    if(visited[x][y] == true || grid[x][y] == '.') return;
    visited[x][y] = true;

    area++;
    perimeter += 4;

    if(grid[x-1][y] == '#'){
        perimeter--;
        if(visited[x-1][y] == false) floodFill(x-1,y);
    }

    if(grid[x+1][y] == '#'){
        perimeter--;
        if(visited[x+1][y] == false) floodFill(x+1,y);
    }

    if(grid[x][y-1] == '#'){
        perimeter--;
        if(visited[x][y-1] == false) floodFill(x,y-1);
    }

    if(grid[x][y+1] == '#'){
        perimeter--;
        if(visited[x][y+1] == false) floodFill(x,y+1);
    }

}

int main() {

    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);

    ll n;
    cin in n;

    fo(i,1,n){
        string s;
        cin in s;
        fo(j,1,n){
            grid[i][j] = s[j-1];
        }
    }

    ll ansarea = -INF , ansperimeter;

    fo(i,1,n){
        fo(j,1,n){
            if(visited[i][j] == true || grid[i][j] == '.') continue;

            area = 0 , perimeter = 0;
            floodFill(i,j);

            if(area > ansarea){
                ansarea = area;
                ansperimeter = perimeter;
            }
            else if(area == ansarea){
                mmin(ansperimeter,perimeter);
            }
        }
    }

    cout out ansarea space ansperimeter;

    return 0;
}
