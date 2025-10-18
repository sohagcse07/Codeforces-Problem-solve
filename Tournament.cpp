#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);

    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]); 
    }
    j--;

    if (k == 1) {
        if (a[j] == mx) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    cout << "YES\n";
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

    return 0;
}
