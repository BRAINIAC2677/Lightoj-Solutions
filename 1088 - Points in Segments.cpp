/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/



#include<bits/stdc++.h>
using namespace std;
 
 
int n;
int aa[100000];
 
int segment(int l, int h)
{
    int* low = lower_bound(aa, aa +n, l);
    int* high = upper_bound(aa , aa +n, h);
    return high - low;
}
 
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++)
    {
        int  t;
        scanf("%i%i", &n , &t);
        for(int a = 0; a < n; a++)
            scanf("%d", &aa[a]);
        printf("Case %d:\n", i);
        for(int b = 0; b < t; b++)
        {
            int l, h;
            scanf("%d%d", &l, &h);
            printf("%d\n", segment(l, h));
        }
        memset(aa, 0, sizeof(aa));
    }
    return 0;
}
