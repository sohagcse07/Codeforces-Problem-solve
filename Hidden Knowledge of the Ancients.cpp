#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define pb push_back
#define sz(x) (int)(x).size()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;

ll slove(const vector<int>& a, int k, int l, int r){


    if (k ==0) return 0;

    int n =a.size();

    vi v = a;
    vi tm = v;

    sort(tm.begin(), tm.end());

    tm.erase(unique(tm.begin(), tm.end()), tm.end());

    vi arr(n);


    for(int i=0; i<n; i++)

        arr[i] =lower_bound(tm.begin(),tm.end(),a[i]) - tm.begin();


    int m =tm.size();

    vi cnt(m, 0);

    int L = 0, dis = 0;

    ll ans = 0;

    for (int R =0;R<n; R++){

        if ( ++cnt[arr[R]]==1)dis++;


        while (dis>k){

            if (--cnt[arr[L]] == 0) dis--;

            L++;

        }

        int win_sz = R - L + 1;

        int len = min(win_sz, r);

        if (len >= l) ans += (len - l + 1LL);
    }

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
    cin>>t;

    while(t--){

        int n, k, l, r;

        cin>>n>>k>>l>>r;

        vi a(n);

        for (int i=0; i<n; i++) cin>>a[i];


        ll res = slove(a,k,l,r) - slove(a,k - 1,l,r);


        cout<<res <<'\n';

    }
}




