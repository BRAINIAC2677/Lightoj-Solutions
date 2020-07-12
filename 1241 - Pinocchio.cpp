/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int n, p=2, x, res = 0;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x > p)
                res += ceil((x-p) / 5.0);
            p = x;
        }
        printf("Case %d: %d\n", i, res);
     }
    return 0;
}
