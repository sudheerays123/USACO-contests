#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
#define foo(i,a,b,d) for(ll i = a; i <= b; i+=d)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);

	ll n;
	cin in n;

	vector<vi> a(7, vi(2, 0));

	a[0][1] = 0;
	a[1][1] = 1;
	a[2][1] = 2;
	a[3][1] = 3;
	a[4][1] = 4;
	a[5][1] = 5;
	a[6][1] = 6;

	fo(i, 0, n - 1) {
		string s;
		ll x;
		cin in s in x;

		if (s == "Bessie") a[0][0] += x;
		else if (s == "Elsie") a[1][0] += x;
		else if (s == "Daisy") a[2][0] += x;
		else if (s == "Gertie") a[3][0] += x;
		else if (s == "Annabelle") a[4][0] += x;
		else if (s == "Maggie") a[5][0] += x;
		else if (s == "Henrietta") a[6][0] += x;
	}

	sort(a.begin(), a.end());

	ll first = 0;
	while(a[first][0] == 0) first++;
	if(first == 6){
		if (a[6][1] == 0) cout out "Bessie\n";
		if (a[6][1] == 1) cout out "Elsie\n";
		if (a[6][1] == 2) cout out "Daisy\n";
		if (a[6][1] == 3) cout out "Gertie\n";
		if (a[6][1] == 4) cout out "Annabelle\n";
		if (a[6][1] == 5) cout out "Maggie\n";
		if (a[6][1] == 6) cout out "Henrietta\n";
		return 0;
	}

	ll ans = first+1;

	while (ans <= 6 && a[first][0] == a[ans][0]) ans++;
	if(ans <= 6 && a[first][0] == a[ans][0]) ans++;

	if (ans >= 7) {
        cout out "Tie\n";
        return 0;
	}

	else{
		if (a[ans][1] == 0) cout out "Bessie\n";
		if (a[ans][1] == 1) cout out "Elsie\n";
		if (a[ans][1] == 2) cout out "Daisy\n";
		if (a[ans][1] == 3) cout out "Gertie\n";
		if (a[ans][1] == 4) cout out "Annabelle\n";
		if (a[ans][1] == 5) cout out "Maggie\n";
		if (a[ans][1] == 6) cout out "Henrietta\n";
	}

	return 0;
}
