#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
        int n;
        ll m;
        cin >> n >> m;

        vector<pair<ll, int>> req(n + 1);
        req[0] = {0, 0};
        for (int i = 1; i <= n; i++) {
            cin >> req[i].first >> req[i].second;
        }

        ll ans = 0;

        for (int i = 1; i <= n; i++) {
            ll t1 = req[i - 1].first;
            ll t2 = req[i].first;
            int s = req[i - 1].second;
            int e = req[i].second;

            ll delta = t2 - t1;
            ll dist = abs(s - e);

            if (dist > delta) {
                ans = -1; 
                break;
            }

            if ((delta - dist) % 2 == 0) {
                ans += delta;
            } else {
                ans += delta - 1;
            }
        }

        ll last_time = req[n].first;
        ll extra = m - last_time;
        ans += extra; 

        cout << ans << "\n";
    }
    return 0;
}
