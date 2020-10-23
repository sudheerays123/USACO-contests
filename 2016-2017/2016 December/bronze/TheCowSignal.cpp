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

int main(){

	freopen("cowsignal.in","r",stdin);
	freopen("cowsignal.out","w",stdout);

	ll m,n,k;
	cin in m in n in k;

	fo(i,0,m-1){
		string s;
		cin in s;

		string again = "";
		foo(cur,0,n-1,0){
			char cc = s[cur];
			fo(time,0,k-1) {
				cout out cc;
				again += cc;
			}
			cur++;
			while(s[cur] == cc){
				fo(time,0,k-1) {
					cout out cc;
					again += cc;
				}
				cur++;
			}
		}

		cout nextline;
		fo(i,0,k-2) cout out again nextline;

	}

}
