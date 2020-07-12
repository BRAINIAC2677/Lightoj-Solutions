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
        unsigned long long w, e, o;
        cin >> w;
        if(w % 2)
            printf("Case %d: Impossible\n",i);
        else
        {
            e = 2;
            o = w / 2;
            while(o % 2 == 0)
            {
                e *= 2;
                o /= 2;
            }
            printf("Case %d: %lld %lld\n",i, o, e);
        }
    }
    return 0;
}
