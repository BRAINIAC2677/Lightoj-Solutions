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
        int n, d;
        unsigned long long act;
        cin >> n >> d;
        act = d;
        int ans = 1;
        while(act%n != 0)
        {
            act = ((act * 10) + d) % n;
            ans++;
        }
        printf("Case %d: %i\n", i, ans);
    }
    return 0;
}
