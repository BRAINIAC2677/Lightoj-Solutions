/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
#define PI 2*acos(0.0)
int main()
{
    int n;
    cin >> n;
    double R;
    int N;
    for(int i = 1; i <= n; i++)
    {
        cin >> R >> N;
        double si = sin(PI / N);
        double r = (R * si) / ( 1 + si );
        printf("Case %d: %.9f\n", i , r);
    }
    return 0;
}
