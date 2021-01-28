#include <bits/stdc++.h>
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

set<char> individual;
set<pair<char,char>> teampair;

void findans(char x , char y , char z){

    set<char> s;

    s.insert(x);
    s.insert(y);
    s.insert(z);

    if(s.size() == 1) individual.insert(x);
    else if(s.size() == 2) {
        if(x == y) {
            if(x < z) teampair.insert(mp(x,z));
            else teampair.insert(mp(z,x));
        }
        else {
            if(x < y) teampair.insert(mp(x,y));
            else teampair.insert(mp(y,x));
        }
    }
}

int main() {

    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);

    vector<vector<char>> ttt(5,vector<char>(5));

    fo(i,0,2){
        string s;
        cin in s;
        fo(j,0,2) ttt[i][j] = s[j];
    }

    // 1st column
    findans(ttt[0][0],ttt[1][0],ttt[2][0]);
    // 2nd column
    findans(ttt[0][1],ttt[1][1],ttt[2][1]);
    // 3rd column
    findans(ttt[0][2],ttt[1][2],ttt[2][2]);
    // 1st row
    findans(ttt[0][0],ttt[0][1],ttt[0][2]);
    // 2nd row
    findans(ttt[1][0],ttt[1][1],ttt[1][2]);
    // 3rd row
    findans(ttt[2][0],ttt[2][1],ttt[2][2]);
    // 1st Diagonal :
    findans(ttt[0][0],ttt[1][1],ttt[2][2]);
    // 2nd Diagonal :
    findans(ttt[0][2],ttt[1][1],ttt[2][0]);

    cout out individual.size() nextline out teampair.size();

    return 0;
}
