/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int priority_ind[16][16], dp[1<<16], n;
 
int Set(int n, int pos)
{
    return n|(1<<pos);
}
 
bool check(int n, int pos)
{
    return (bool)(n & (1<<pos));
}
 
int counting(int m)
{
    int cou = 0;
    while(m)
    {
        if(check(m, 0))
            cou++;
        m >>= 1;
    }
    return cou;
}
 
int bitmask()
{
    for(int mask = 0; mask<=(1<<n)-1; mask++)
    {
        int x = counting(mask);
        for(int j = 0; j <n; j++)
        {
            if(!check(mask, j))
            {
                dp[Set(mask, j)] = max(dp[Set(mask, j)], dp[mask] + priority_ind[x][j]);
            }
        }
    }
    return dp[(1<<n) - 1];
}
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        cin >> n;
        memset(priority_ind, 0, sizeof(priority_ind));
        memset(dp, INT_MIN, sizeof(dp));
        for(int a = 0; a<n; a++)
            for(int b = 0; b < n; b++)
                cin >> priority_ind[a][b];
        printf("Case %d: %d\n", i, bitmask());
     }
    return 0;
}
