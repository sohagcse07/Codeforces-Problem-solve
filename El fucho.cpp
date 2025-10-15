#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int w = n; // winners' group
        int l = 0; // losers' group
        int matches = 0;

        while (!(w == 1 && l == 1)) {
            int new_l = l; // losers carried to next round
            // Winners' group matches
            int winners_matches = w / 2;
            matches += winners_matches;
            new_l += winners_matches; // losers from winners go to losers next round
            w = w - winners_matches;  // winners stay

            // Losers' group matches (current round)
            int losers_matches = l / 2;
            matches += losers_matches;
            l = l - losers_matches; // winners stay, losers eliminated

            // Update losers' group for next round
            l = l + winners_matches; // add winners' group losers
        }

        // Final match between last winner and last loser
        matches += 1;

        cout << matches << "\n";
    }

    return 0;
}
