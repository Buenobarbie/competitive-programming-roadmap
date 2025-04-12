// https://atcoder.jp/contests/abc220/tasks/abc220_c
#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    long long n; 
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;

    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    long long x;
    cin >> x;

    long long i = (x / sum) * n;
    sum = (x / sum) * sum;
    while(true){
        sum += v[(i) % n];

        i++;
        // dbg(sum);
        if (sum > x){
            cout << i << "\n";
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