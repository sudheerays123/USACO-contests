#include <bits/stdc++.h>
using namespace std;
typedef int ll;
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define INF 0x3f3f3f
#define MOD 1e9 + 7
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define foo(i,a,b,d) for(ll i = a; i <= b; i+=d)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

ll n;
ll area = 0  , perimeter = 0;
map<pair<ll, ll>, ll> grid;
map<pair<ll, ll>, bool> visited;

void floodfill(ll x, ll y) {

	if (visited[mp(x, y)] == true) return;
	visited[mp(x, y)] = true;
	area++;

	ll around = 0;
	if (x != 0 && grid.find(mp(x - 1, y)) != grid.end()) {
		around++;
		floodfill(x - 1, y);
	}
	if (y != 0 && grid.find(mp(x, y - 1)) != grid.end()) {
		around++;
		floodfill(x, y - 1);
	}
	if (x != n - 1 && grid.find(mp(x + 1, y)) != grid.end()) {
		around++;
		floodfill(x + 1, y);
	}
	if (y != n - 1 && grid.find(mp(x, y + 1)) != grid.end()) {
		around++;
		floodfill(x, y + 1);
	}

	perimeter += 4 - around;

}

int main() {

	freopen("perimeter.in", "r", stdin);
	freopen("perimeter.out", "w", stdout);

	cin in n;

	fo(i, 0, n - 1) {
		string s;
		cin in s;
		fo(j, 0, n - 1) {
			char x = s[j];
			if (x == '#') grid[mp(i, j)] = 1;
			visited[mp(i, j)] = false;
		}
	}

	ll ansarea = -INF, ansperimeter = -INF;

	for (auto i : grid) {
		area = 0;
		perimeter = 0;	

		floodfill(i.first.first, i.first.second);

		if (area > ansarea) {
			ansarea = area;
			ansperimeter = perimeter;
		}
		else if (area == ansarea && ansperimeter > perimeter) ansperimeter = perimeter;
	}

	cout out ansarea space ansperimeter nextline;

	return 0;
}
