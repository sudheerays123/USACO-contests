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
#define print(x) for(auto i : x ) cout out i.first space i.second nextline
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

struct Rect{
    ll x1,y1,x2,y2;
};

ll intersect ( Rect x , Rect y ){

    ll xOverlap = max(0ll,min(x.x2,y.x2)-max(x.x1,y.x1));
    ll yOverlap = max(0ll,min(x.y2,y.y2)-max(x.y1,y.y1));

    return xOverlap*yOverlap;
}

ll areaofRect ( Rect r){
    return (r.y2-r.y1)*(r.x2-r.x1);
}

int main() {

    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);

    Rect a,b,t;

    cin in a.x1 in a.y1 in a.x2 in a.y2;
    cin in b.x1 in b.y1 in b.x2 in b.y2;
    cin in t.x1 in t.y1 in t.x2 in t.y2;

    cout out areaofRect(a) + areaofRect(b) - intersect(a,t) - intersect(b,t);

    return 0;
}
