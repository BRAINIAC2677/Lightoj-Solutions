/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
unsigned long long  dp[210][105], value[210][105];
int n;
 
int main()
{
    int t;
    cin >> t;
    for(int r = 1; r <= t; r++)
    {
        memset (value, 0, sizeof(value));
        memset(dp, 0, sizeof(dp));
        cin >> n;
        for(int a = 1; a<= n; a++)
        {
            for(int b = 1; b <= a; b++)
                cin >> value[a][b];
        }
        for (int a = n + 1, j = n - 1; a <= (2 * n - 1); a++,j--)
        {
            for(int b = 1; b <= j ; b++)
                cin >> value[a][b];
        }
        for(int i = 2*n - 1; i >= 1;i--)
        {
            int jmax;
            if(i >= n)
            {
                jmax = 2*n - i;
                for(int j = 1; j <= jmax; j++)
                {
                    if(i == 2*n - 1)
                    {
                        //cout << "i = 2n - 1" << endl;
                        dp[i][j] = value[i][j];
                        continue;
                    }
                    dp[i][j] = max(value[i][j] + dp[i+1][j], value[i][j] + dp[i+ 1][j - 1]);
                }
            }
 
            else
            {
                jmax = i;
                for(int j = 1; j <= jmax ; j++)
                    dp[i][j] = max(value[i][j] + dp[i+1][j], value[i][j] + dp[i+1][j + 1]);
            }
        }
        printf("Case %d: %lld\n", r, dp[1][1]);
    }
    return 0;
}
