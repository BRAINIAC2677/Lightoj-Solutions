/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mod 1000003
 
ll ura[501][501], rad[501][501], dp[501][501];
 
ll ans(int row, int col)
{
    if(row <= 0 || col <= 0)
        return 0;
    if(dp[row][col] != -1)
        return dp[row][col];
    return dp[row][col] = max(ans(row, col-1)+rad[row][col], ans(row-1, col)+ura[row][col]);
}
 
int main()
{
    int tc;
    scanf("%i", &tc);
    for(int i = 1; i <= tc; i++)
    {
        int r, c, a;
        scanf("%[^\n]", &a);
        scanf("%i %i", &r, &c);
        memset(ura, 0, sizeof(ura));
        memset(rad, 0, sizeof(rad));
        memset(dp, -1, sizeof(dp));
        for(int j = 1; j <= r; j++)
            for(int k = 1; k <= c; k++)
            {
                int x;
                scanf("%i", &x);
                ura[j][k] = ura[j][k-1] + x;
            }
        for(int j = 1; j<=r; j++)
            for(int k = 1; k<= c; k++)
            {
                int x;
                scanf("%i", &x);
                rad[j][k] = rad[j-1][k] + x;
            }
        printf("Case %i: %lld\n", i, ans(r,c));
    }
    return 0;
}
