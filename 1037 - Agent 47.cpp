/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int val[15][15], dp[1<<15], n;float health[15];
 
bool check(int n, int pos)
{
    return (bool)(n & (1<<pos));
}
 
int Set(int n, int pos)
{
    return n | (1 << pos);
}
 
int bitmask(int mask)
{
    if(mask == (1<<n) - 1)
        return 0;
    if(dp[mask] != -1)
        return dp[mask];
    int mini = INT_MAX;
    for(int aa = 0; aa < n; aa++)
    {
        if(!check(mask, aa))
        {
            int shotv = 1;
            for(int i = 0; i < n; i++)
            {
                if(check(mask, i))
                    shotv = max(shotv, val[i][aa]);
            }
            mini = min(mini, (int)ceil(health[aa]/shotv) + bitmask(Set(mask, aa)));
        }
    }
    return dp[mask] = mini;
}
 
int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int a;
        memset(val, 0, sizeof(val));
        memset(dp, -1, sizeof(dp));
        scanf("%[^\n]", a);
        cin >> n;
        for(int a = 0; a < n; a++)
            cin >> health[a];
        for(int a = 0; a< n; a++)
        {
            string valu;
            cin >> valu;
            for(int b = 0; b < n; b++)
                val[a][b] = valu[b] - '0';
        }
        printf("Case %d: %d\n", i, bitmask(0));
    }
    return 0;
}
