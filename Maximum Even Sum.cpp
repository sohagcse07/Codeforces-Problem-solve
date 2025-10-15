#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      

    int t;
    cin >> t;
    while (t--) {
        long long b, a;
        cin >> b >> a;
        long long ans = -1;

        if ( ((a + b) & 1LL) == 0 ) {
            ans = a + b;
        }

        if (a % 2 == 1 && b % 2 == 1) {
            ans = max(ans, a * b + 1);
        } else if (a % 2 == 0 && (a % 4 == 0 || b % 2 == 0)) {
            ans = max(ans, 2 + (a * b) / 2);
        }

        cout << ans << "\n";
    }

    return 0;
}
