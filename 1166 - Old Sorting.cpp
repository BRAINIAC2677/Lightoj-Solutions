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
        int n, ans  =0;
        cin >> n;
        int aa[n+1];
        for(int a = 1 ; a<= n; a++)
            cin >> aa[a];
        for(int a = 1 ; a<= n; a++)
        {
            while(aa[a] != a)
            {
                ans++;
                swap(aa[a] , aa[aa[a]]);
            }
        }
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
