#include <bits/stdc++.h>
using namespace std;


#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define pb push_back
#define sz(x) (int)(x).size()

typedef vector<int> vi;
typedef pair<int, int> pii;
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
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long cost = 0;

        for (int i = 1; i < n; i += 2) {
            long long pref_max = *max_element(a.begin(), a.begin() + i + 1);
            a[i] = pref_max;
        }

        for (int i = 0; i + 1 < n; i++) {
            if (i % 2 == 0) {
                if (a[i] >= a[i + 1]) {
                    long long decrease = a[i] - a[i + 1] + 1;
                    cost += decrease;
                    a[i] -= decrease;
                }
            } else {
                if (a[i] <= a[i + 1]) {
                    long long decrease = a[i + 1] - a[i] + 1;
                    cost += decrease;
                    a[i + 1] -= decrease;
                }
            }
        }

        cout << cost << "\n";
    }

    return 0;
}
