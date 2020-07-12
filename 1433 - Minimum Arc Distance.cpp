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
        int ox, oy, ax, ay, bx, by;
        scanf("%i %i %i %i %i %i", &ox, &oy, &ax, &ay, &bx, &by);
        double r = sqrt((ax-ox)*(ax-ox) + (ay-oy)*(ay-oy));
        double ab = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
        double angle = acos((2*r*r-ab*ab)/(2*r*r));
        double ans = r * angle;
        printf("Case %d: %.8f\n", i, ans);
    }
    return 0;
}
 
