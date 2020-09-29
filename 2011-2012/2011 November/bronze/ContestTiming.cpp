#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
#define INF 0x3f3f3f3f3f

int main() {


    ll date , hour , minute;
    cin >> date >> hour >> minute;

    if(date == 11){
        ll ans = 0;
        if(hour != 11) {
            ans += 49;
            ans += minute;
            ans += (hour - 12)*60;
        }
        else{
            ans += minute-11;
        }

        cout << ans;
    }
    else{
        ll oans = 49+720;
        oans += (day-12)*1440;
        oans += hour*60 + minute;
        cout << oans;
    }

    return 0;
}
