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
        int ax, ay, bx, by, cx, cy, dx, dy, area;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx = ax + cx - bx; dy = ay + cy - by;
        area = abs(ax*by + bx*cy + cx*dy + dx*ay - ay*bx - by*cx - cy*dx - dy*ax)/2;
        printf("Case %d: %d %d %d\n", i, dx, dy, area);
    }
    return 0;
}
