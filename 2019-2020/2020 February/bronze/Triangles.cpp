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

int main() {

	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

	ll n;
	cin in n;

	vector<vi> a(n + 5, vi(2));

	// 0 --> x coordinate
	// 1 --> y coordinate

	fo(i, 0, n - 1) cin in a[i][0] in a[i][1];

	ll ans = -INF;

	fo(i, 0, n - 1) {
		fo(j, 0, n - 1) {
			fo(k, 0, n - 1) {
				// i is the corner
				// j is the upper vertex (same x coordinate as i)
				// k is the right vertex (same y coordinate as i)

				if (a[j][0] == a[i][0] && a[k][1] == a[i][1]) {

					ll area = (a[i][0] - a[k][0]) * (a[j][1] - a[i][1]);
					mmax(ans, abs(area));

				}
			}
		}
	}

	cout out ans;
}
