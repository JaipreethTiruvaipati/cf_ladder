#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t; 
    if (!(cin >> t)) return;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n < 2) { cout << 0 << '\n'; continue; }

        bool sorted = true;
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i+1]) { sorted = false; break; }
        }

        if (!sorted) {
            cout << 0 << '\n';
            continue;
        }

        int mn = LLONG_MAX;
        for (int i = 0; i + 1 < n; i++) {
            
            mn = min(mn, a[i+1] - a[i]);
        }

        int ans = mn / 2 + 1;
        cout << ans << '\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
