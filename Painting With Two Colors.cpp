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
        long long n, a, b;
        cin >> n >> a >> b;

        if ((n - b) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        long long y = (n - b) / 2 + 1;

        if (a <= b) {
            long long x = y;
            cout << "YES\n";
        } else {
            if ((n - a) % 2 != 0) {
                cout << "NO\n";
            } else {
                long long x = (n - a) / 2 + 1;
                cout << "YES\n";
            }
        }
    }

    return 0;
}
