/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int val[14][14], dp[1<<14], n;
 
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
            int price = val[aa][aa];
            for(int b = 0; b < n; b++)
            {
                if(b != aa && check(mask, b))
                    price += val[aa][b];
            }
            mini = min(mini, price + bitmask(Set(mask, aa)));
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
        memset(val, 0, sizeof(val));
        memset(dp, -1, sizeof(dp));
        cin >> n;
        for(int a = 0; a < n;a++)
            for(int b = 0; b < n; b++)
                cin >> val[a][b];
        printf("Case %d: %d\n", i, bitmask(0));
    }
    return 0;
}
