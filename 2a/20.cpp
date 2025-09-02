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
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int index=0;

        if(n%2==0)
        {
            index=n/2;
        }
        else
        {
            index=n/2+1;
        }
        int ans=0;
        int i=index;
        while(i<=n && arr[i]==arr[index] )
        {
            ans++;
            i++;
        }
        cout<<ans<<'\n';
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
