//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
        vector<vector<int>>arr(5,vector<int>(5));
        pair<int,int>point;
        for (int i =0; i<5; i++) {
            for(int j=0;j<5;j++)
            {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            point={i,j};
            }
        }
       
        int ans=abs(point.first-2)+abs(point.second-2);
        cout<<ans<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    solve();
}
