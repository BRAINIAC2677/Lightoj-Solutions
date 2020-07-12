/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false)
#define ll long long
 
int main()
{
    io;
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        ll n;
        cin>>n;
        ll ans = 0, j;
        for(j = 1; j*j<= n; j++)
            ans += (n/j + (n/j - (n/(j+1)))*j);
        j--;
        if(j== n/j)
            ans -= j;
        printf("Case %i: %lld\n", i, ans);
    }
    return 0;
}
