#include <bits/stdc++.h>
using namespace std;

// type = 1: original array sum
// type = 2: modified array sum
// long long query(int type, int l, int r) {
//     cout << type << " " << l << " " << r << endl;
//     cout.flush();
//     long long res;
//     cin >> res;
//     return res;
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif



    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string a, b;
        cin>>a>>b;

        int i = 0, ans = 0;

        while(i<n){
         
            int var =(a[i] != b[i]);

            if (i + 1 < n){

                int tp =(a[i]!=a[i+1]);


                int tb =(b[i] != b[i+1]);


                int line =tp+tb;


                if (line<var){

                    ans +=line;

                    i +=2;

                    continue;
                }
            }

            ans +=var;

            i++;
        }

        cout<<ans<<endl;;
    }
      

   




    return 0;
}