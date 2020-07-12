/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
struct point
{
    double x, y , z;
};
 
point P;
 
double fun(point m)
{
    return sqrt((P.x - m.x)*(P.x - m.x) + (P.y - m.y)*(P.y - m.y) + (P.z - m.z)*(P.z - m.z));
}
 
double ts(point a, point b)
{
    point mid1, mid2;
    for(int i = 0; i < 100; i++)
    {
        mid1.x = (2 * a.x + b.x)/3;
        mid1.y = (2 * a.y + b.y) / 3;
        mid1.z = (2*a.z + b.z)/3;
        mid2.x = (2*b.x + a.x)/3;
        mid2.y = (2*b.y + a.y)/3;
        mid2.z = (2*b.z + a.z) /3;
        if(fun(mid1) > fun(mid2))
            a = mid1;
        else
            b = mid2;
    }
    return fun(a);
}
 
int main()
{
    int tc;
    point A, B;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> P.x >> P.y >> P.z;
        printf("Case %d: %.10f\n", i, ts(A, B));
    }
    return 0;
}
