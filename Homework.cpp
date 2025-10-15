
// #include<bits/stdc++.h>
// using namespace std;


// int32_t main() {
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   #endif
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);

//   int t;
//   cin>>t;

//   while(t--){

//   	int n;

//   	string ns;
//   	cin>>ns;

//   	int m;

//   	cin>>m;

//   	string ms1;
//   	cin>>ms1;

//   	string ms2;
//   	cin>>ms2;

//   	deque < char > ans;



//   	for ( auto c:ns ) ans.push_back(c);


//   	for (int i=0; i<m; i++){

//   		if ( ms2[i] == 'D'){

//   			ans.push_back(ms1[i]);
//   		}else{


//   			ans.push_front(ms1[i]);

//   		}
//   	}

//   	for (auto u:ans ){
//   		cout << u ;
//   	}

//   	cout << endl;
//   }







//     return 0;
// }



#include <bits/stdc++.h>
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
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;

        int m;
        cin >> m;
        string b, c;
        cin >> b >> c;

        deque<char> dq(a.begin(), a.end());

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                dq.push_front(b[i]);
            } else { 
                dq.push_back(b[i]);
            }
        }

        for (char ch : dq) cout << ch;
        cout << "\n";
    }

    return 0;
}
