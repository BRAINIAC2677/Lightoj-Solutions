/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i= 1;i <= t;i++)
    {
        int m, l;
        cin >> m >> l;
        int res = (fabs(m - l) + m) * 4 + 19;
        printf("Case %d: %d\n", i , res);
    }
    return 0;
}
