/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++)
    {
        int a, s, du = 0;
        scanf("%[^\n]",a);
        cin >> s;
        while(s--)
        {
            int x;
            cin >> x;
            if (x > 0)
                du += x;
        }
        printf("Case %d: %d\n", i , du);
    }
    return 0;
}
