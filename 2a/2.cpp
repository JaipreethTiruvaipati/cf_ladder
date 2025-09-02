//https://codeforces.com/problemset/problem/1903/A
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n>>k;
        vector<int> arr(n);
        bool same=true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(i>0 && arr[i]<arr[i-1])
            {
                same =false;
            }
        }

        if(k>1)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            if(same)
            cout<<"YES"<<'\n';
            else
            cout<<"NO"<<'\n';
        }
        
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
}
