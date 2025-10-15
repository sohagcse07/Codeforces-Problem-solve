#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef vector<long long> vl;

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

        int n;
        cin >>n;

        vl a(n);
        for(auto &x : a) cin >>x;

        map<ll,int, greater<ll>> cnt;

        for(auto x: a)cnt[x]++;

        vl p;   

        vl left_most; 

        for(auto &[len,count] : cnt){

            int num_p = count / 2;

            int l_val = count % 2;

            for(int i=0;i<num_p;i++) p.push_back(len);

            for(int i=0;i<l_val;i++) left_most.push_back(len);

        }

        ll sum_p = 0;

        ll max_pair = p.empty() ? 0 : p[0];

        for(auto x: p) sum_p += x;

        ll ans = 0;

        if(!p.empty()) {

            ll prime = 2 * sum_p;

            if(prime > 2*max_pair) ans = prime;

        }

        if(!left_most.empty()) {

            ll mx_leftmost = *max_element(left_most.begin(), left_most.end());

            if(mx_leftmost < sum_p) {
                ll perim1 = 2 * sum_p + mx_leftmost;
                ans = max(ans, perim1);
            }
        }

        if(left_most.size() >= 2) {

            sort(left_most.begin(), left_most.end());

            for(int i=1;i<left_most.size();i++) {

                ll S_odd = left_most[i-1];

                ll L_odd = left_most[i];
                if(L_odd - S_odd < sum_p) {

                    ll perim2 = 2 * sum_p + L_odd + S_odd;
                    ans = max(ans, perim2);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
