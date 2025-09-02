//https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk; cin >> xk >> yk;
        int xq, yq; cin >> xq >> yq;

        vector<pair<int,int>> moves = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };

        set<pair<int,int>> sk, sq;
        for (auto &m : moves) {
            sk.insert({xk + m.first, yk + m.second});
            sq.insert({xq + m.first, yq + m.second});
        }

        int ans = 0;
        for (auto &p : sk) if (sq.count(p)) ++ans;
        cout << ans << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
