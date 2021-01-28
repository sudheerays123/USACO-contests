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

    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);

    vector<vector<char>> ttt(5,vector<char>(5));

    fo(i,0,2){
        string s;
        cin in s;
        fo(j,0,2) ttt[i][j] = s[j];
    }

    ll single = 0 , team = 0;

    set<char> s;

    // 1st column

    s.insert(ttt[0][0]);
    s.insert(ttt[1][0]);
    s.insert(ttt[2][0]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 2nd column

    s.insert(ttt[0][1]);
    s.insert(ttt[1][1]);
    s.insert(ttt[2][1]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 3rd column

    s.insert(ttt[0][2]);
    s.insert(ttt[1][2]);
    s.insert(ttt[2][2]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 1st row

    s.insert(ttt[0][0]);
    s.insert(ttt[0][1]);
    s.insert(ttt[0][2]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 2nd row

    s.insert(ttt[1][0]);
    s.insert(ttt[1][1]);
    s.insert(ttt[1][2]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 3rd row

    s.insert(ttt[2][0]);
    s.insert(ttt[2][1]);
    s.insert(ttt[2][2]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 1st Diagonal :

    s.insert(ttt[0][0]);
    s.insert(ttt[1][1]);
    s.insert(ttt[2][2]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    // 2nd Diagonal :

    s.insert(ttt[0][2]);
    s.insert(ttt[1][1]);
    s.insert(ttt[2][0]);

    if(s.size() == 1) single++;
    else if(s.size() == 2) team++;
    s.clear();

    cout out single nextline out team;

    return 0;
}
