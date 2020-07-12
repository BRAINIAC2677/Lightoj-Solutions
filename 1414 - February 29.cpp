/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i<= tc; i++)
    {
        string m1, m2;int d1, d2, y1, y2, strt, en;
        cin >> m1;
        scanf("%d, %d", &d1, &y1);
        cin >> m2;
        scanf("%d, %d", &d2, &y2);
        if(m1[0] == 'F' || (m1[0] == 'J' && m1[1] == 'a'))
            strt = y1;
        else
            strt = y1 + 1;
        if((m2[0] == 'J' && m2[1] == 'a') || (m2[0] == 'F' && d2 < 29))
            en = y2 - 1;
        else
            en = y2;
        int mul4 = floor(en/4.0) - ceil(strt/4.0) + 1;
        int mul100 = floor(en/100.0) - ceil(strt/100.0) + 1;
        int mul400 = floor(en/400.0) - ceil(strt/400.0) + 1;
        //cout <<"Strt: "<<strt << " en: " << en <<" mul4: " << mul4 << " m100: " << mul100 << " m400: " << mul400 << endl;
        printf("Case %d: %d\n", i, mul4 + mul400 - mul100);
    }
    return 0;
}
