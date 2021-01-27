#include <iostream>
#include <vector>
#include <algorithm>
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

int main() {

    ll n;
    cin in n;

    vi p(n+5) , pre(n+5);
    fo(i,0,n-1) {
        cin in p[i];
        if(i == 0) pre[i] = p[i];
        else pre[i] = pre[i-1]+p[i];
    }

    ll cnt = n;

    fo(i,1,n-1){
        fo(j,0,i-1){
            double average;
            if(j == 0) average = pre[i];
            else average = pre[i]-pre[j-1];
            average = average / (double) (i-j+1);

            bool hasAverage = false;
            fo(k,j,i){
                if(p[k] == average){
                    hasAverage = true;
                    break;
                }
            }

            if(hasAverage == true) cnt++;
        }
    }

    cout out cnt;

    return 0;
}
