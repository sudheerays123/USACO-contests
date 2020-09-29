#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long int ll;
#define INF 0x3f3f3f3f3f

int main() {


    ll date , hour , minute;
    cin >> date >> hour >> minute;

    ll time_till_11_11_11 = 16511;
    ll time_till_date_hour_minute = date*24*60 + hour*60 + minute;

    if(time_till_date_hour_minute < time_till_11_11_11) cout << "-1";
    else cout << time_till_date_hour_minute - time_till_11_11_11;

    return 0;
}
