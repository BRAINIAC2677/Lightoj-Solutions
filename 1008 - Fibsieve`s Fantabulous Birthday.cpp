/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++)
    {
        long long s;
        cin >> s;
        if (s == 1)
        {
            printf("Case %d: 1 1\n",i);
            continue;
        }
        long long x, y, N;
        long long sq = sqrt(s);
        if (sq * sq == s)
            N = sq;
        else
            N = sq + 1;
        long long mid = (N * N + (N - 1)*(N - 1) + 1) / 2;
        if (N % 2)
        {
            if (mid > s)
            {
                x = N;
                y = N - (mid - s);
            }
            else
            {
                y = N;
                x = N - (s - mid);
            }
        }
        else
        {
            if ( mid > s)
            {
                x = N - (mid - s);
                y = N;
            }
            else
            {
                x = N;
                y = N - (s - mid);
            }
        }
        printf("Case %d: %lld %lld\n",i, x, y);
    }
    return 0;
}
