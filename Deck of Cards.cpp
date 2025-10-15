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

    cin>>t;

    while(t--){

        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;
        
        int fixed_top = 0, fixed_bot = 0, flex = 0;

            for (char c : s) {

                if (c == '0') fixed_top++;
                else if (c == '1') fixed_bot++;
                else flex++;
            }

        int t_min = max(fixed_top, k - (fixed_bot + flex));
        int t_max = min(fixed_top + flex, k - fixed_bot);

        string ans(n, '+');

        for (int i = 1; i <= n; ++i) {

            int L = i - (n - k);
            int R = i - 1;
            bool possiable = (L <= R) && (max(t_min, L) <= min(t_max, R));
            
            if (!possiable) {
                ans[i - 1] = '-';  
            } else if (i > t_max && i <= n - (k - t_min)) {
                ans[i - 1] = '+';  
            } else {
                ans[i - 1] = '?'; 
            }
        }


        cout<<ans << '\n';
    }




    return 0;
}


