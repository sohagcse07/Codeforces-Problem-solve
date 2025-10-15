#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

typedef long long ll;



int main() {
    fast_io;
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend()); 

        int k = min((ll)n, m);  // 3 
        ll ans = 0;
        for (int j = 0; j < k; j++) {
            ans += a[j] * (m - j); // ans = 1 * ( 4 - 2) = 12 ,6 , 2 = 20 
        }
        cout << ans << endl;
    }

    return 0;
}
