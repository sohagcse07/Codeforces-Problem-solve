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
        int n, k;
        cin >> n >> k;

        // impossible case
        if (k == n * n - 1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<vector<char>> grid(n, vector<char>(n, '.'));

        // Step 1: Fill k cells with 'U' (row-major)
        int placed = 0;
        for (int i = 0; i < n && placed < k; i++) {
            for (int j = 0; j < n && placed < k; j++) {
                grid[i][j] = 'U';
                placed++;
            }
        }

        // Step 2: Fill non-last-row '.' with 'D'
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '.') grid[i][j] = 'D';
            }
        }

        // Step 3: Fill last row (first '.' = 'R', rest '.' = 'L')
        bool firstR = false;
        for (int j = 0; j < n; j++) {
            if (grid[n - 1][j] == '.') {
                if (!firstR) {
                    grid[n - 1][j] = 'R';
                    firstR = true;
                } else {
                    grid[n - 1][j] = 'L';
                }
            }
        }

        // Output final grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cout << grid[i][j];
            cout << '\n';
        }
    }
    return 0;
}
