/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++)
    {
        string s;
        cin >> s;
        int l = s.size();
        int lim = l / 2;
        bool flag = 1;
        for(int j = 0; j <= lim; j++)
        {
            if(s[j] != s[l - (j+1)])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %i: No\n", i);
    }
    return 0;
}
