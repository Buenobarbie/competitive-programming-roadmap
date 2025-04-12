// https://atcoder.jp/contests/abc200/tasks/abc200_c
#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int n;
    cin >> n;
    long long b[200] = {0};

    for(int i = 0; i < n; i++){
        long long num;
        cin >> num;
        b[num % 200]    += 1;
    }

    long long ans = 0;
    for(int i = 0; i < 200; i++){
        if(b[i] > 1){
            ans += (b[i] * (b[i] - 1)) / 2;
        }
    }

    cout << ans << "\n";
    return;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}