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
        unsigned long long n; string c;
        cin >> n >> c;
        if(c[0] == 'A')
        {
            n--;
            if(n%3==0)
                printf("Case %d: Bob\n", i);
            else
                printf("Case %d: Alice\n", i);
        }
        else
        {
            if(n%3==0)
                printf("Case %d: Alice\n", i);
            else
                printf("Case %d: Bob\n", i);
        }
    }
    return 0;
}
