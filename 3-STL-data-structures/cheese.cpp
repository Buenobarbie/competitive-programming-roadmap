// https://atcoder.jp/contests/abc229/tasks/abc229_c
#include <bits/stdc++.h>
#include <string.h>
#include <cmath>

#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    int n;
    long long max_cheese;

    cin >> n >> max_cheese;

    vector<pair<long long, long long>> cheese_info; // delicousness, amount

    long long a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cheese_info.push_back(make_pair(a, b));
    }

    sort(cheese_info.begin(), cheese_info.end());

    long long total_delicousness = 0;
    long long cheese_left = max_cheese;

    for(int i = n-1; i >= 0; i--){
        if(cheese_info[i].second <= cheese_left){
            total_delicousness += cheese_info[i].first * cheese_info[i].second;
            cheese_left -= cheese_info[i].second;
        } else {
            total_delicousness += cheese_info[i].first * cheese_left;
            break;
        }
    }

    cout << total_delicousness << "\n";

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}