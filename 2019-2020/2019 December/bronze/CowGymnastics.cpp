#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

    ll k,n;
    fin >> k >> n;

    vector<ll> adj[25];

    for(ll i = 0; i < k; i++){
        for(ll j = 0; j < n; j++){
            ll x;
            fin >> x;
            adj[x-1].push_back(j);
        }
    }

    ll count = 0;

    for(ll i = 0; i < n; i++){
        for(ll j = i+1; j < n; j++) {
            ll which;
            if (adj[i][0] < adj[j][0]) which = 0;
            else which = 1;

            bool pos = true;
            for (ll kk = 1; kk < k; kk++) {
                if (which == 0 && adj[i][kk] < adj[j][kk]) continue;
                else if (which == 1 && adj[i][kk] > adj[j][kk]) continue;
                else {
                    pos = false;
                    break;
                }
            }

            if(pos == true) count++;
        }
    }

    fout << count;

    return 0;
}
