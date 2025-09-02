//https://codeforces.com/problemset/problem/71/A

#include<iostream>
using namespace std;
#define int long long 
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        if(n>10)
        {
            cout<<s[0]<<n-2<<s[n-1]<<'\n';
        }
        else
        {
            cout<<s<<'\n';
        }
    }

}