//
#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(auto v:arr)
        {
            sum+=v;
        }
        int ans=-sum;
        cout<<ans<<'\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
