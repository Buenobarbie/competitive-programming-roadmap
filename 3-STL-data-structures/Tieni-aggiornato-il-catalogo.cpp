// https://codeforces.com/gym/420506/problem/A

#include <bits/stdc++.h>
#include <string.h>
#include <cmath>

#define dbg(x) cout << #x << ":" << x << "\n";

using namespace std;

#define MAX 10000

void solve(){
    long long n;

    cin >> n;
    vector<long long> library;

    char c;
    long long book;
    for(long long i = 0; i < n; i++){
        cin >> c >> book;

        if(c == 'a')      library.push_back(book);
        else if (c == 't') library.erase(find(library.begin(), library.end(), book));
    
        else cout << count(library.begin(), library.end(), book) << "\n";
    }

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}