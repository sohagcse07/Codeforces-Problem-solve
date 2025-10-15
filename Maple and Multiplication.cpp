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

    	int a , b;

    	cin>>a>>b;



    	
    	if ( a == b ){

    		cout << 0 << endl;
    	}

    	else if ( a % b == 0 || b % a == 0  ){

    		cout << 1 << endl;
    	}
    	else{

    		cout << 2 << endl;
    	}
    }

  

    return 0;
}





