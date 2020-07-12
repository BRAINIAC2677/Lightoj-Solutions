/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using  namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int n, l, b, h, maxi = 0, mini = INT_MAX;
        string s, mas, mis;
        cin >> n;
        while(n--)
        {
            cin >> s >> l >> b >> h;
            int v = l * b * h;
            if(v > maxi)
            {
                maxi = v;
                mas = s;
            }
            if(v < mini)
            {
                mini = v;
                mis = s;
            }
        }
        if(maxi == mini)
            printf("Case %d: no thief\n", i);
        else
            cout << "Case " << i << ": " << mas << " took chocolate from " << mis << endl;
    }
    return 0;
}
