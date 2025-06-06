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

    multiset<long long> library;

    char c;
    long long book;

    for (long long i = 0; i < n; i++) {
        cin >> c >> book;

        if (c == 'a') library.insert(book); 
        else if (c == 't')  library.erase(library.find(book));
        else cout << library.count(book) << "\n"; // O(log n)
        
    }
    

}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}