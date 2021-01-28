#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
#define in >>
#define out <<
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc ll test; cin in test; while(test--)
#define ff first
#define ss second
#define vi vector<ll>
#define pb push_back
#define mp make_pair
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define MOD 1000000007
#define spacef << " "
#define space << " " <<
#define nextline out "\n"

int main(){

    fast;

    ll n;
    cin in n;

    ll odd = 0 , even = 0;

    fo(i,0,n-1){
        ll x;
        cin in x;
        if(x%2 == 0) even++;
        else odd++;
    }

    if(even > odd){
        cout out odd*2 + 1;
        return 0;
    }
    else if(even == odd){
        cout out n;
        return 0;
    }
    else{
        ll ans;
//        if(even >= 1) {
//            ll x = odd-even+1;
//            ans =  even + (x/3)*2;
//            if(x%3 == 1) ans--;
//            else if(x%3 == 2) ans++;
//        }
//        else {
//            ans = (odd/3)*2;
//            if(odd%3 == 1) ans--;
//            else if(odd%3 == 2) ans++;
//        }
//
//        cout out max(0ll,ans);
//        return 0;

        odd -= even;
        ans = 2*even;

        ll which = 0;
        while(odd > 0){
            if(which%2 == 0 && odd >= 2) odd -= 2;
            else odd--;

            which++;
            ans++;

            if(odd ==  2 && which%2 == 1) break;

        }

        cout out ans;
        return 0;

    }


    return 0;
}
