
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



  int n;
  cin>>n;


  vector<long long > a(n);


  for (int i=0; i<n; i++ ){

  	cin>>a[i];
  }



  int mxLN = 1 , curLN = 1 ;


  for (int i=1; i<n; i++ ){


  	if ( a[i] >= a[i-1] ) curLN+=1;
  	else curLN = 1;

  	mxLN = max( curLN , mxLN);
  }


  cout << mxLN << endl;







    return 0;
}