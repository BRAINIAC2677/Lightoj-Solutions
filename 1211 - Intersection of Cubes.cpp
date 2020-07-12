/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int n, max1 = 0, may1 = 0, maz1 = 0, mix2 = INT_MAX, miy2 = INT_MAX, miz2 = INT_MAX;
        cin >> n;
        while (n--)
        {
            int x1, y1, z1, x2, y2, z2;
            cin >> x1>> y1 >> z1 >> x2 >> y2 >> z2;
            max1 = max(max1, x1);
            may1 = max(may1, y1);
            maz1 = max(maz1, z1);
            mix2 = min(mix2, x2);
            miy2 = min(miy2, y2);
            miz2 = min(miz2, z2);
        }
        if(max1 > mix2 || may1 > miy2 || maz1 > miz2)
        {
            cout  << "Case " << i << ": " << 0 << endl;
            continue;
        }
        long long res = (mix2 - max1) *(miy2 - may1) *(miz2 - maz1);
        cout << "Case " << i << ": " << res << endl;
    }
    return 0;
}
