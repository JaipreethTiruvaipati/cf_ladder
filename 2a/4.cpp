//https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int,int> freq;
        for (int x : a) freq[x]++;

        if (freq.size() == 1) {
            cout << "YES\n";
        } else if (freq.size() == 2) {
            auto it = freq.begin();
            int f1 = it->second; ++it;
            int f2 = it->second;
            if (abs(f1 - f2) <= 1) cout << "YES\n";
            else cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
