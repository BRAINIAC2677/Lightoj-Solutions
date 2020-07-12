/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, op;
        cin.ignore();
        cin >> n >> op;
        long long ar[n];
        for(int j = 0; j < n; j++)
            cin >> ar[j];
        while(op--)
        {
            char str;
            cin >> str;
            if (str == 'S')
            {
                //cout << " Sum" << endl;
                long long d;
                cin >> d;
                for(int a = 0; a < n;a++)
                    ar[a] += d;
            }
 
            else if(str == 'M')
            {
                //cout << "Mul" << endl;
                long long d;
                cin >> d;
                for(int a = 0; a < n ; a++)
                    ar[a] *= d;
            }
 
            else if(str == 'D')
            {
                //cout << "div" << endl;
                long long d;
                cin >> d;
                for(int a = 0; a < n ; a++)
                    ar[a] /= d;
            }
 
            else if(str == 'R')
            {
                //cout << "Rev" << endl;
                int en;
                for(int st = 0, en = n -1; st < en; st++, en--)
                {
                    ar[st] ^= ar[en];
                    ar[en] ^= ar[st];
                    ar[st] ^= ar[en];
                }
            }
 
            else
            {
                //cout << "Swap" << endl;
                int y, z;
                cin >> y >> z;
                swap(ar[y], ar[z]);
            }
        }
        printf("Case %d:\n%lld", i, ar[0]);
        for(int a = 1; a <n; a++)
            printf(" %lld", ar[a]);
        printf("\n");
    }
    return 0;
}
