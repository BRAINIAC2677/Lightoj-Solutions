/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        double r1, r2, r3, a,  b, c, area,s, ded;
        cin >> r1 >> r2 >> r3;
        a = r1 + r2; b = r1 + r3; c = r2 + r3;
        s = (a + b + c) / 2;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        ded = ( r1*r1*acos((a*a + b*b - c*c )/ (2*a*b))+ r2*r2*acos((a*a + c*c - b*b)/ (2*a*c))+ r3*r3*acos((b*b + c*c - a*a)/(2*b*c)))/2.0;
        area -= ded;
        printf("Case %d: %.9f\n", i, area);
    }
    return 0;
}
