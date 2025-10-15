
#include<bits/stdc++.h>
using namespace std;

long long t , p , p1 , cnt , n ;
int32_t main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);



  cin>>t;


  while(t--){


  	cin>>n;

  	 p =1;

  	 cnt = 0;

    p1 = p * 10 + 1 ;


  	vector<long long> ans ;


  	while( p1 <= n ){

  		if ( n % p1 == 0 ){

  			ans.push_back( n / p1);
        cnt++;
  		}

      p = p * 10;

  		p1 = p*10+1;
  	}

  	cout << cnt << endl;

    
    for ( int i=ans.size()-1; i>=0; i--){

      cout << ans[i] << " ";
    }

  	if ( cnt >0  ) cout << endl;
  }







    return 0;
}