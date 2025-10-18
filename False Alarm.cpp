#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define pb push_back
#define sz(x) (int)(x).size()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool possible = false;

        for (int i = 0; i < n; i++) {
            bool all_open_before = true;
            for (int j = 0; j < i; j++) {
                if (a[j] == 1) {
                    all_open_before = false;
                    break;
                }
            }
            if (!all_open_before) continue;

            bool ok = true;
            for (int k = i + x; k < n; k++) {
                if (a[k] == 1) { 
                    ok = false;
                    break;
                }
            }

            if (ok) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

  

    return 0;
}
