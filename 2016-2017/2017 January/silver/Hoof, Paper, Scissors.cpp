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
#define print(x) for(auto i : x ) cout out i;
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)

int main() {

    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);

    ll n;
    cin in n;

    vector<char> gesture(n+5);
    fo(i,0,n-1) cin in gesture[i];

    vector<vi> win(n+5,vi(3));

    fo(i,0,n-1){
        if(i == 0){
            if(gesture[i] == 'P'){
                win[i][2] = 1;
                win[i][0] = 0;
                win[i][1] = 0;
            }
            else if(gesture[i] == 'H'){
                win[i][1] = 1;
                win[i][0] = 0;
                win[i][2] = 0;
            }
            else if(gesture[i] == 'S'){
                win[i][0] = 1;
                win[i][2] = 0;
                win[i][1] = 0;
            }
        }
        else{
            if(gesture[i] == 'P'){
                win[i][2] = win[i-1][2]+1;
                win[i][0] = win[i-1][0];
                win[i][1] = win[i-1][1];
            }
            else if(gesture[i] == 'H'){
                win[i][1] = win[i-1][1]+1;
                win[i][0] = win[i-1][0];
                win[i][2] = win[i-1][2];
            }
            else if(gesture[i] == 'S'){
                win[i][0] = win[i-1][0]+1;
                win[i][2] = win[i-1][2];
                win[i][1] = win[i-1][1];
            }
        }
    }

    ll ans = -INF;

    fo(i,0,n-1){
        if(i == n-1){
            mmax(ans,max(max(win[i][0],win[i][1]),win[i][2]));
        }
        else{
            // H
            mmax(ans,win[i][0]+max(win[n-1][1]-win[i][1],win[n-1][2]-win[i][2]));
            // P
            mmax(ans,win[i][1]+max(win[n-1][0]-win[i][0],win[n-1][2]-win[i][2]));
            // S
            mmax(ans,win[i][2]+max(win[n-1][0]-win[i][0],win[n-1][1]-win[i][1]));
        }
    }

    cout out ans;

    return 0;
}
