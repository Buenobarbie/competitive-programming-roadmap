// https://atcoder.jp/contests/abc205/tasks/abc205_b

#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int n;
    cin >> n;

    vector<int> a(n+1);

    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        a[num] += 1; 

        if (a[num] > 1){
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
    return;


}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}