#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int n = (a- a%c + c);

    if (a % c == 0) cout << a << "\n";
    else if(n > b) cout << -1 << "\n";
    else cout << n << "\n";
    return;


}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}