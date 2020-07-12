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
        unsigned long long n, m, ans;
        cin >> n >> m;
        ans = (m*m) * (n /( 2*m));
        printf("Case %d: %llu\n", i, ans);
    }
    return 0;
}
