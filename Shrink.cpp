#include <bits/stdc++.h>
using namespace std;

vector<int> maxShrinkPermutation(int n) {
    vector<int> ans;
    vector<int> small, large;

    int mid = (n + 1) / 2; 
    for (int i = 1; i <= mid; ++i) small.push_back(i);       
    for (int i = mid + 1; i <= n; ++i) large.push_back(i);  

    int si = 1;              
    int li = large.size() - 1; 

    ans.push_back(small[si]); 
    si++;

    while (si < small.size() || li >= 0) {
        if (li >= 0) ans.push_back(large[li--]);
        if (si < small.size()) ans.push_back(small[si++]);
    }

    ans.push_back(small[0]);

    return ans;
}

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
        vector<int> perm = maxShrinkPermutation(n);
        for (int i = 0; i < n; ++i) {
            cout << perm[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
