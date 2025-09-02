//https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int p=0;
        int ans=0;
        while(p<n)
        {
            int count=0;
            while(p<n-1 && arr[p]%2==arr[p+1]%2)
            {
                count++;
                p++;
            }
            ans+=count;
            p++;
        }
        cout<<ans<<'\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
