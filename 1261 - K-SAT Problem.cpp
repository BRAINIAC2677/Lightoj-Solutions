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
        int n, m, k, x;
        cin >> n >> m >> k;
        bool flag[n];
        memset(flag , 1, sizeof(flag));
        vector<int>  data[2*m +1];
        for(int a = 0; a < n; a++)
        {
            //cout << " a: " <<  a << endl;
            for(int b = 0; b < k; b++)
            {
                //cout << " b: " << b << endl;
                scanf("%d", &x);
                //cout << x << endl;
                if(x > 0)
                    data[x].push_back(a);
                else
                    data[m + abs(x)].push_back(a);
                //cout << "END" << endl;
            }
        }
        //cout << " hello " << endl;
        int p;
        cin >> p;
        bool has[m+1];
        memset(has, 0, sizeof(has));
        for(int j = 1; j <= p; j++)
        {
            cin >> x;
            has[x] = 1;
        }
        for(int c = 1; c <= m; c++)
        {
            int mapp;
            if(has[c])
                mapp = c;
            else
                mapp = m + c;
            int l = data[mapp].size();
            for(int e = 0; e < l; e++)
                flag[data[mapp][e]] = 0;
        }
        int f = 1;
        for(int z = 0; z < n; z++)
        {
            if(flag[z] == 1)
            {
                f = 0;
                break;
            }
        }
        if(f)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
