// https://atcoder.jp/contests/abc206/tasks/abc206_c
#include <bits/stdc++.h>
#include <string.h>
#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    long long n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    long long ans = (long long) ((n * (n-1))/2);

    long long count_equals = 0;
    long long prev_equal = 0;
    for (int i = 1; i < n; i++){
        if(v[i] == v[i-1]){

            count_equals += 1;
            prev_equal = 1;
        }
        else{
            if(prev_equal ){
                count_equals += 1;
                ans -= (long long) ((count_equals * (count_equals - 1))/2);
                count_equals = 0;
            }
            prev_equal = 0;
        }
    }

    if(prev_equal ){
        count_equals += 1;
        ans -= (long long) ((count_equals * (count_equals - 1))/2);
        count_equals = 0;
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