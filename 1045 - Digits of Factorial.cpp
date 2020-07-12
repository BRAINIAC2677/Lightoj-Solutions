/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
double arr[1000003];
int main()
{
    int t;
    cin >> t;
    for (int a = 1; a<= 1000000; a++)
        arr[a] = arr[a -1] + log10(a);
    for (int i = 1; i <= t ; i++)
    {
        int n , b;
        cin >> n >> b;
        if (n == 0)
        {
            printf("Case %d: 1\n",i);
            continue;
        }
        int res = floor(arr[n] / log10(b)) + 1;
        printf("Case %d: %d\n",i, res);
    }
    return 0;
}
