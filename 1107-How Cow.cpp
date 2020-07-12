/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i ++)
    {
        int x1, y1, x2, y2 , cn;
        cin >> x1 >> y1 >> x2 >> y2>> cn;
        printf("Case %d:\n", i);
        while(cn--)
        {
            int x, y;
            cin >> x >> y;
            if (x1 <= x && x <= x2&& y1 <= y && y <= y2)
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
 
