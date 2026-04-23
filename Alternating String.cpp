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
        string s;
        cin >> s;


        int bad = 0;
        for (int i=0; i+1<s.size(); i++){

            if (s[i] == s[i+1]) bad++;
        }

        if (bad<=2) cout<<"YES\n";

        else cout<<"NO\n";
    }


    return 0;
}