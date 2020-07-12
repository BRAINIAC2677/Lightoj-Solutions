/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
        int r1, c1, r2, c2;
        cin>> r1 >> c1 >> r2 >> c2;
        int d1 = abs(r2 - r1);
        int d2 = abs(c2 - c1);
        if(d2 == d1)
            printf("Case %d: 1\n", i);
        else if(!(abs(d2-d1)%2))
            printf("Case %d: 2\n", i);
        else
            cout << "Case " << i << ": impossible" << endl;
    }
    return 0;
}
