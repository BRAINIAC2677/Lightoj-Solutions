/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
 #define PI 2*acos(0.0)
 #define ERROR 1e-9
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++)
    {
        double r1, r2, h , p;
        cin >> r1 >> r2 >> h >> p;
 
        double mid,low = 0, high = PI / 3 * h * (r1*r1 + r2*r2 + r1*r2);
        double rn = (p*(r1 - r2) + r2 * h) / h;
        double exp = PI / 3 * p*(rn*rn + r2*r2 + r2*rn);
 
        while(77)
        {
            mid = (high + low) / 2;
            if(fabs(mid - exp) <= ERROR)
                break;
            else if(mid > exp)
                high = mid;
            else
                low = mid;
        }
 
        printf("Case %d: %.10f\n", i, mid);
    }
    return 0;
}
