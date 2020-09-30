#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    ifstream fin("typo.in");
    ofstream fout("typo.out");

    string s;
    fin >> s;

    ll alternating_brackets_depth = 0 , ans = 0, total_opening_brackets_till_now = 0 , total_closing_brackets_till_now = 0;

    for(ll i = 0; i < s.size(); i++){

        if(s[i] == '(') {
            alternating_brackets_depth++;
            total_opening_brackets_till_now++;
        }
        else {
            alternating_brackets_depth--;
            total_closing_brackets_till_now++;
        }

        if(alternating_brackets_depth < 0){
            ans = total_closing_brackets_till_now;
            break;
        }
        else if(alternating_brackets_depth <= 1) total_opening_brackets_till_now = 0;
    }

    if(alternating_brackets_depth >= 1) ans = total_opening_brackets_till_now;

    fout << ans;

    return 0;
}
