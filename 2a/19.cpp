//https://codeforces.com/problemset/problem/1972/A
#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int j=0,i=0;
        int ans=0;
        while(i<n && j<n)
        {
            if(b[j]<a[i])
            {
                ans++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout<<ans<<'\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
