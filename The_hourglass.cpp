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
        
        ll s,k,m;
        cin >>s>>k>>m;

        ll ans;


        if(s > k){

            ll period = 2 * k;

            ll mp = m % period;

            if(mp <= k - 1)

                ans = s - mp;
            else
                ans = 2 * k - mp;
        }else{

            ll mp = m % k;
            if(mp < s)
                ans = s - mp;
            else
                ans = 0;
        }

        cout<<ans<<endl;
    }
    
    
    
    return 0;
}