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
        int r, c;
        scanf("%d %d", &r, &c);
        if(r==1 || c == 1)
            printf("Case %d: %d\n", i, r*c);
        else if(r == 2 || c == 2)
        {
            int divi = (r*c) / 4;
            if(divi%2)
                printf("Case %d: %d\n", i, (divi+1)/2*4);
            else
                printf("Case %d: %d\n", i, divi/2*4+r*c%4);
        }
        else
            printf("Case %d: %d\n", i, (r*c + 1)/2);
    }
    return 0;
}
