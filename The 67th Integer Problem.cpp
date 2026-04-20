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

    cin>>t;




    while(t--){

        vi a(7);

        int sum = 0 , mx = -1e9;

        for (int i=0; i<7; i++ ){

            cin>>a[i];

            sum += a[i];

            mx = max(mx , a[i]);
        }


        int ans = 0;


        ans = 2*mx - sum;

        cout << ans << endl;



    }



    // cout << "hello world\n";


    // cout << "hi\n";


    // int t;
    // cin >> t;

    // while (t--) {
    //     int n;
    //     cin >> n;

    //     vector<int> a(n);
    //     int sum = 0;

    //     for (int i = 0; i < n; i++) {
    //         cin >> a[i];
    //         sum += a[i];
    //     }

    //     int ans = 0;

    //     for (int i = 0; i < n; i++) {
    //         if (a[i] > (sum - 1) / n)
    //             ans++;
    //     }

    //     cout << ans << "\n";
    // }


  

    return 0;
}