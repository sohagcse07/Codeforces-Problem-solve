
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

  	vector<int> p(n);

  	for (int i=0; i<n; i++ ){

  		cin>>p[i];
  	}

  	int Nsum = abs( n + 1);

  	vector<int> ans;

  	for (int i=0; i<n; i++){

  		ans.push_back(abs(p[i] - Nsum));
  	}


  	for (auto u:ans ){

  		cout << u << " ";
  	}

  	
  	cout << endl;
  }

  







    return 0;
}