// https://atcoder.jp/contests/abc204/tasks/abc204_b
#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int n;
    int nuts;
    int total = 0;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> nuts;
        if (nuts > 10) total += nuts - 10;
    }

    cout << total << "\n";

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}