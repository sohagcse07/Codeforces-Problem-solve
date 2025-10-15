#include <bits/stdc++.h>
using namespace std;

long long min_swaps(const string &s, char target) {


    vector<int> pos;
    int n = s.size();
    for (int i = 0; i < n; i++)
        if (s[i] == target)
            pos.push_back(i);

    int m = pos.size();

    if (m <= 1) return 0;

    vector<long long> diff(m);

    for (int i = 0; i < m; i++)

        diff[i] = (long long)pos[i] - i;

    sort(diff.begin(), diff.end());

    long long median = diff[m / 2];

    long long swaps = 0;

    for (int i = 0; i < m; i++)
        
        swaps += abs(diff[i] - median);

    return swaps;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
      

    int t;
    cin >>t;

    while (t--){

        int n;
        string s;
        cin >> n>> s;


        long long ans = min(min_swaps(s, 'a'), min_swaps(s, 'b'));

        cout <<ans << "\n";
    }

    return 0;
}
