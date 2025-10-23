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
    if(!(cin >> t)) return 0;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        
        int ans = 0;
        
        int last = -1000000000;
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
            
                if (i - last >= k) {
                    ans++;
                }
                last = i; 
            }
        }
        
        cout << ans << '\n';
    }
    return 0;
}
