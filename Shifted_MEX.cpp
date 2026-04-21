#include <bits/stdc++.h>

using namespace std;



int need_thing(vector<int> &a ){
    
    unordered_set<int> s(a.begin(), a.end());
    
    
    int mx = 0;
    
    while(s.count(mx)) mx++;
    

    return mx;
    
    
}





int main(){
    
    
    
    
    int t;
    
    cin>>t;
    
    while(t--){
        
        
        int n;
        
        cin>>n;
        
        
        vector<int> a(n);
        
        
        
        int ans = 0;
        
        
        for (int i=0; i<n; i++){
            cin>>a[i];
            
        }
        for(int i=0; i<n; i++ ){
        
            int x = -a[i];
            
            
            vector<int> b = a;
            
            for (int j=0; j<n; j++ ){
                
                b[j] += x;
                
            }
            ans = max ( ans , need_thing(b));
        }
        
        
        cout << ans << endl;
    }
    
    
    
    
    return 0;
}