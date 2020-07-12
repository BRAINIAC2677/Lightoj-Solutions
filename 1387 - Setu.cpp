/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i<= tc; i++)
    {
        unsigned long long amount = 0;
        int n;
        scanf("%i", &n);
        printf("Case %d:\n", i);
        while(n--)
        {
            string s;
            cin >> s;
            if(s[0] == 'd')
            {
                int x;
                scanf("%d", &x);
                amount += x;
            }
            else
                printf("%llu\n", amount);
        }
    }
    return 0;
}
