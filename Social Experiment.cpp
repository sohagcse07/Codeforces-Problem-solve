#include <bits/stdc++.h>

using namespace std;



// int need_thing(vector<int> &a ){
    
//     unordered_set<int> s(a.begin(), a.end());
    
    
//     int mx = 0;
    
//     while(s.count(mx)) mx++;
    

//     return mx;
    
    
// }

#define ll long long




int main(){
    
    
    
    
    int t;
    
    cin>>t;
    
    while(t--){
        
    
    
        int n;
        
        cin>>n;
        
        
        // if ( n % 3 == 0  ){
            
        //     cout << 0 << endl;
        // }else if (n % 3 == 2){
            
        //     cout << 2 << endl;
        // }else{
            
        //     cout<<1<<endl;
        // }
        
       if ( n < 4 ) cout << n << endl;
       
       else cout << n % 2 << endl;
                
        // for (auto u:a ) cout << u << " ";
        
        
    
    }
    
    
    
    
    return 0;
}