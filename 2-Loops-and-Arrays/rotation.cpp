#include <bits/stdc++.h>
#include <string.h>
#include <cmath>

#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    long long size;
    long long n_queries;

    string s;
    cin >> size >> n_queries;
    cin >> s;

    long long s_begin = 0;

    long long query_type;
    int query_arg;

    for(int i = 0; i < n_queries; i++){
        cin >> query_type >> query_arg;

        if (query_type == 1){
            s_begin -= query_arg;
            if(s_begin < 0){
                s_begin += size;
            }
        }

        if (query_type == 2){
            // dbg((s_begin + query_arg - 1) % size);
            cout << s[(s_begin + query_arg - 1) % size] << "\n";
        }
    }

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}