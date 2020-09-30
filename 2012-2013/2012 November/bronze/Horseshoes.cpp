#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ans = 0;
vector<vector<ll> > grid(7, vector<ll>(7));
vector<vector<bool> > visited(7 , vector<bool>(7,true));
ll n;

void calculateAnswer(ll x , ll y , ll numberOfOpen , ll numberOfClose , bool foundClose ) {

    if(numberOfOpen == numberOfClose) {
        ans = max(ans , numberOfOpen*2);
        return;
    }

    if(foundClose && (2*numberOfOpen <= ans))
        return;

    visited[x][y] = false;

    if(x < n-1 && visited[x+1][y] == true) {
        if(grid[x+1][y] == 1) calculateAnswer(x+1, y,  numberOfOpen , numberOfClose+1 ,  true);
        else if(grid[x+1][y] == 0 && foundClose == false) calculateAnswer(x+1, y,  numberOfOpen + 1 , numberOfClose ,  false);
    }
    if(x > 0 && visited[x-1][y] == true) {
        if(grid[x-1][y] == 1) calculateAnswer(x-1, y,  numberOfOpen , numberOfClose+1 ,  true);
        else if(grid[x-1][y] == 0 && foundClose == false) calculateAnswer(x-1, y,  numberOfOpen + 1 , numberOfClose ,  false);
    }

    if(y < n-1 && visited[x][y+1] == true) {
        if(grid[x][y+1] == 1) calculateAnswer(x, y+1 ,  numberOfOpen , numberOfClose+1 ,  true);
        else if(grid[x][y+1] == 0 && foundClose == false) calculateAnswer(x, y+1 ,  numberOfOpen + 1 , numberOfClose ,  false);
    }
    if(y > 0 && visited[x][y-1] == true) {
        if(grid[x][y-1] == 1) calculateAnswer(x, y-1 ,  numberOfOpen , numberOfClose+1 ,  true);
        else if(grid[x][y-1] == 0 && foundClose == false) calculateAnswer(x, y-1 ,  numberOfOpen + 1 , numberOfClose ,  false);
    }

    visited[x][y] = true;
}

int main() {

    ifstream fin("hshoe.in");
    ofstream fout("hshoe.out");

    fin >>  n;

    for(ll i = 0; i < n; i++){
        string s;
        fin >> s;

        for(ll j = 0; j < n; j++){
            if(s[j] =='(') {
                grid[i][j] = 0;
            }
            else grid[i][j] = 1;
        }
    }

    if(grid[0][0] == 0) calculateAnswer(0,0,1,0,false);

    fout << ans;

    return 0;
}
