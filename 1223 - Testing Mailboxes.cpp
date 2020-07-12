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
#define lim 105
 
int dp[lim][lim][lim];
 
int main()
{
    io;
    for(int i = 0; i< lim; i++)
        for(int j = i; j< lim; j++)
            dp[1][i][j] = (j-i+1)*(j+i)/2;
    for(int i = 2; i<lim; i++)
        for(int j = lim-1; j >= 1; j--)
            for(int k = j; k <lim; k++){
                int ans = INT_MAX;
                for(int x = j; x <=k; x++)
                    ans = min(ans, x+max(dp[i-1][j][x-1], dp[i][x+1][k]));
                dp[i][j][k] = ans;
            }
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n, m;
        cin>>n >>m;
        cout<<"Case " <<i <<": " << dp[n][1][m] <<"\n";
    }
    return 0;
}
