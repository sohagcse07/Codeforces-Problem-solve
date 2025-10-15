#include <bits/stdc++.h>
using namespace std;

bool ok(int x, int y) {
    int m = max(x, y);
    int n = min(x, y);
    return m <= 2 * n + 2;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int r1 = a, k1 = b;
        int r2 = c - a, k2 = d - b;

        if (ok(r1, k1) && ok(r2, k2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
