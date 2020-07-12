/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
#define err  1e-7
double base(double x, double y, double h)
{
    double low = 0, high = min(x, y);
    while(true)
    {
        double mid = (low + high) / 2;
        double guess = (sqrt(x*x - mid * mid)*sqrt(y*y - mid*mid)) / (sqrt(x*x - mid * mid) + sqrt(y*y - mid*mid));
        if (fabs(guess - h) <= err)
            return mid;
        else if (guess > h)
            low = mid;
        else
            high = mid;
    }
}
 
int main()
{
    int n;
    cin >> n;
    for(int j = 1; j <= n; j++)
    {
        double x, y, h;
        cin >> x >> y >> h;
        printf("Case %d: %.9f\n", j, base(x,y,h));
    }
    return 0;
}
