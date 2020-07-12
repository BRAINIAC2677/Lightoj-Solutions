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
        int n , p, q, a;
        cin >> n >> p >> q;
        int arr[n];
        for(int b = 0; b < n; b++)
            cin >> arr[b];
        p = min(n , p);
        for(a = 0; a<p; a++)
        {
            q -= arr[a];
            if(q < 0)
                break;
        }
        printf("Case %d: %d\n", i, a);
     }
    return 0;
}
