#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

    ofstream fout("cowfind.out");
    ifstream fin("cowfind.in");

    string s;
    fin >> s;

    vector<ll> front(0);
    vector<ll> back(0);

    for(ll i = 0; i < s.size()-1; i++){
        if(s[i] == '(' && s[i+1] == '(') front.push_back(i);
        if(s[i] == ')' && s[i+1] == ')') back.push_back(i);
    }

    ll ans = 0;

    for(ll i = 0; i < front.size(); i++){
        vector<ll> :: iterator up;
        up = upper_bound(back.begin() , back.end() , front[i]+1);
        if(up == back.end()) continue;
        ll d = back.end()-up;
        ans += d;
    }

    fout << ans;

    return 0;
}
