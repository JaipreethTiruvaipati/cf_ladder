//https://codeforces.com/problemset/problem/1834/A
#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum=0;
        int neg=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]==-1)
            {
                neg++;
            }
        }
        int change=0;
        if(sum>=0 && (neg%2==0))
        {
            change=0;
        }
        else if(sum<0 )
        {
            change=(abs(sum)+1)/2;
            neg-=change;
            if(neg%2!=0)
            {
                change++;
            }
        }
        else if(sum>=0 && (neg%2!=0))
        {
            change=1;
        }
        cout<<change<<'\n';
        
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
