
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

  	string s;
  	cin>>s;


  	int cnt = 0;

  	for ( int i=0; i<n; i++ ){

  		if ( s[i] == '0') cnt++;
  	}

  	int ans = cnt ;

  	for (int i=0; i<cnt; i++ ){

  		if ( s[i] == '0'){

  			ans -= 1;
  		}
  	}

  	cout << ans << endl;
  }







    return 0;
}