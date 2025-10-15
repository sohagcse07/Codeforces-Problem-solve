
#include<bits/stdc++.h>
using namespace std;


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

  	int n;

  	cin>>n;

  	vector<int> a(n);
  	vector<int> b(n);

  	int mx = -1;

  	for (int i=0; i<n; i++ ) cin>>a[i];
  	for (int i=0; i<n; i++ ) cin>>b[i];

  	for (int i=0; i<n; i++){

  		if ( a[i] > b[i]){

  			mx += ( 0ll , abs(a[i] - b[i]));

  		}
  	}

  	cout << mx + 1 + 1 << endl;
  }







    return 0;
}