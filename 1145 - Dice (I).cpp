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
#define mod 100000007
#define pii pair<int, int>
#define PI 2*acos(0.0)
 
 
int main()
{
    io;
    int t;
    cin>>t;
    for(int i  =1; i<=t; i++)
    {
        ll n, k, s;
        cin>> n >>k >>s;
        ll prefix[15005];
        memset(prefix, 0, sizeof(prefix));
        ll dp[15000];
        memset(dp, 0, sizeof(dp));
        for(int j = 1; j<=k; j++)
            dp[j] = 1;
        for(int sum = 1; sum <= s; sum++)
            prefix[sum] = prefix[sum-1] + dp[sum];
        for(int pos = 2; pos < n; pos++)
        {
            for(int sum = 1; sum <= s; sum++)
                dp[sum] = (prefix[sum-1] - prefix[max(0LL, sum-k-1)] + mod) %mod;
            for(int sum = 1; sum <= s; sum++)
                prefix[sum] = (prefix[sum-1] + dp[sum])%mod;
        }
        ll ans = (prefix[s-1] - prefix[max(0LL, s-k-1)] + mod) %mod;
        if (n==1)
            ans = dp[s];
        cout<< "Case " << i <<": " << ans <<"\n";
    }
    return 0;
}
