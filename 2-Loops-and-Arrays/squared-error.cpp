// https://atcoder.jp/contests/abc194/tasks/abc194_c

#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    long long arr[401] = {} ;// Array from -200 to 200

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr[num + 200]++; // Shift the index to be from 0 to 400
    }

    long long ans = 0;
    for(int i = 0; i < 401; i++){
        for(int j = i+1; j < 401; j++){
          long long n1 = i - 200;
          long long n2 = j - 200;
            ans += arr[i] * arr[j] * (n1 - n2) * (n1 - n2);
        }
    }

    cout << ans << endl;
    return;

    

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}