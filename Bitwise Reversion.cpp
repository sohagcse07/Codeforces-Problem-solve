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
    cin >>t;
    while (t--){
        long long x, y, z;

        cin >> x >> y >> z;

        bool ok = true;
        for (int bit = 0; bit < 31; bit++) {
            int xi = (x >> bit) & 1;
            int yi = (y >> bit) & 1;
            int zi = (z >> bit) & 1;

            if (!(
                (xi == 0 && yi == 0 && zi == 0) ||
                (xi == 0 && yi == 1 && zi == 0) ||
                (xi == 0 && yi == 0 && zi == 1) ||
                (xi == 1 && yi == 0 && zi == 0) ||
                (xi == 1 && yi == 1 && zi == 1)
            )) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
