#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    set<int> inc;  // unique increases
    int smash = 0;

    inc.insert(a[0]);  // first increase from 0 to a[0]

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) inc.insert(a[i] - a[i-1]);
        if (a[i] < a[i-1]) smash++;
    }

    cout << inc.size() + smash << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      

    int t;
    cin >> t;
    while (t--) solve();
}
