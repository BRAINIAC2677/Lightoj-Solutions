/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false)
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mod 1000000007
#define pii pair<int, int>
#define PI 2*acos(0.0)
 
int n, m, inp[12];
ll dp[12][12];
 
ll cnt(int pos, int pre)
{
    if(pos == m)
        return 1;
    ll ans = 0;
    for(int i = 0; i< n;i++)
    {
        if(abs(pre - inp[i])<=2)
        {
            if(dp[pos+1][inp[i]] != -1)
                ans+= dp[pos+1][inp[i]];
            else
               ans+= cnt(pos+1, inp[i]);
        }
    }
    return dp[pos][pre] = ans;
}
 
int main()
{
    io;
    int  t;
    cin>>t;
    for(int j = 1; j<=t; j++)
    {
        cin>>n >>m;
        memset(dp, -1, sizeof(dp));
        for(int i = 0; i< n; i++)
            cin>>inp[i];
        ll ans = 0;
        for(int i = 0; i <n;i++)
            ans += cnt(1, inp[i]);
        cout<<"Case " <<j <<": " << ans <<"\n";
    }
    return 0;
}
