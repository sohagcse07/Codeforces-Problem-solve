#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	
	int t;
	
	cin>>t;
	
	while(t--){
	    
	    int n;
	    
	    cin>>n;
	    
	    
	    vector<int> a(n+1);
	    
	    
	    int mx = -1e9;
	    
	    
	    for (int i=1; i<=n;i++ ){
	        cin>>a[i];
	        
	        mx = max(mx , a[i]);
	    }
	    
	    
	    cout << mx * n << endl;
	    
	    
	}

}
