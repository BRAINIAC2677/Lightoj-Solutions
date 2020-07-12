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
        double v1, v2, v3, a1, a2, d, t;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        d = ((v1*v1/a1) + (v2*v2/a2)) / 2.0;
        t =max(v1 / a1, v2/a2) * v3;
        printf("Case %d: %.9lf %.9lf\n", i, d, t);
    }
    return 0;
}
