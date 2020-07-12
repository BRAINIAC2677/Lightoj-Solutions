/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        unsigned long long x;
        cin >> x;
        int cou = 0;
        while(x != 0)
        {
            if(x & 1)
                cou++;
            x = x >> 1;
        }
        if(cou % 2)
            printf("Case %d: odd\n", i);
        else
            printf("Case %d: even\n", i);
    }
    return 0;
}
