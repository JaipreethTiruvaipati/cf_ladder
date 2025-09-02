//https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        bool found = false;
        bool left, right;

        for (int i = 2; i < n; i++) {
            left = false;
            right = false;
            int p = i-1;
            int l = i-1;
            while (p >= 1) { 
                if (arr[i] > arr[p]) {
                    left = true;
                    l = p;
                    break;
                }
                p--;
            }

            p = i+1;
            int r = i+1;
            while (p <= n) {
                if (arr[i] > arr[p]) {
                    right = true;
                    r = p;
                    break;
                }
                p++;
            }

            if (left && right) {
                cout << "YES\n";
                cout << l << " " << i << " " << r << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
