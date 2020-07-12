/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
#define err 1e-8
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double ab, ac, bc, r, low = 0;
        cin >> ab >> ac >> bc >> r;
        double high = ab, mid;
        double S = (ab + bc + ac) / 2;
        double A = sqrt(S * (S- ab) * (S - ac) * (S - bc));
        while(true)
        {
            mid = (low + high) / 2;
            double de = mid * bc / ab;
            double ae = mid * ac / ab;
            double s = (mid + ae + de) / 2;
            double a = sqrt(s*(s- mid) * (s - ae)  * (s - de));
            double rat = a / (A - a);
            if (fabs(rat - r) <= err)
            {
                printf("Case %d: %.9f\n",i, mid);
                break;
            }
            else if (rat > r)
                high = mid;
            else
                low = mid;
        }
    }
    return 0;
}
