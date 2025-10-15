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
    while(t--){

        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        vector<int> freq(n + 2, 0); 

        for(int i = 0; i < n; i++){

            cin >> a[i];

            if(a[i] <= n) freq[a[i]]++;

        }

        int missing_count = 0;

        for(int i = 0; i < k; i++){

            if(freq[i] == 0) missing_count++;

        }

        int count_k = freq[k]; 


        int answer = max(missing_count, count_k); 
        
        cout << answer << "\n";
    }
    return 0;
}
