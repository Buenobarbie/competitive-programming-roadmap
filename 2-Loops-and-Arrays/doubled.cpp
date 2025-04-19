// https://atcoder.jp/contests/abc196/tasks/abc196_c

#include <bits/stdc++.h>
#include <string.h>
#include <cmath>

#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000


void solve(){
    long long n;
    cin >> n;

    for(int i = 0; i < 1000001; i++){
        if(stoll(to_string(i) + to_string(i)) > n){
            cout << i -1 << endl;
            return;
        }
    }

}




int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}