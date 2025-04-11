// https://atcoder.jp/contests/abc240/tasks/abc240_a

#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int a, b;
    cin >> a >> b;
    if(b-a == 1)    cout << "Yes\n";
    else if (b-a == 9) cout << "Yes\n";
    else cout << "No\n";


    return;

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}