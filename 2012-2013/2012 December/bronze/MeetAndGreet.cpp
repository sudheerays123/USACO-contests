#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    ifstream fin("greetings.in");
    ofstream fout("greetings.out");

    ll b,e;
    fin >> b >> e;

    vector<ll> bb(0);
    vector<ll> ee(0);

    for(ll i = 0; i < b; i++) {
        ll x;
        fin >> x;
        string s;
        fin >> s;
        if(s == "L") bb.push_back(x*-1);
        else bb.push_back(x);
    }
    for(ll i = 0; i < e; i++) {
        ll x;
        fin >> x;
        string s;
        fin >> s;
        if(s == "L") ee.push_back(x*-1);
        else ee.push_back(x);
    }

    ll posb = 0 , pose = 0 , ib = 0 , ie = 0 , ans = 0;

    while(ib <= bb.size() && ie <= ee.size()){
        ll pb = posb , pe = pose;

        posb += bb[ib];
        pose += ee[ie];

        cout << posb << " " << pose << "\n";

        if((pe < pb && pose > posb) || (pb < pe && posb > pose)) ans++;
  
        ib++; ie++;
    }

    while(ib <= bb.size()){
        ll pb = posb;
        posb += bb[ib];

        cout << posb << " " << pose << "\n";
        if((pb > pose && posb < pose) || (pb < pose && posb > pose)) ans++;
        ib++;
    }

    while(ie <= ee.size()){
        ll pe = pose;
        pose += ee[ie];

        cout << posb << " " << pose << "\n";
        if((pe > posb && pose < posb) || (pe < posb && pose > posb)) ans++;
        
        ie++;
    }

    fout << ans;

    return 0;
}
