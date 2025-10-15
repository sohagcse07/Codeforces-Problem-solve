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

    	ll n , m , x , y ;

    	cin>>n>>m>>x>>y;

    	vi a(n),b(m);

    	for(int i=0; i<n; i++) cin>>a[i];
    	for(int i=0; i<m; i++) cin>>b[i];

    	cout <<  n + m << endl;
    }

  

    return 0;
}
