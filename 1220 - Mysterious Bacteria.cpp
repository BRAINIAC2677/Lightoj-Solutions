/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false)
#define ll long long
 
ll ihatebacteria(ll n)
{
    bool niga = 0;
    if(n<0)
    {
        n *= -1;
        niga = 1;
    }
    for(ll i = 2; i*i <= n; i++)
    {
        if(n%i)
            continue;
        ll res = 0, t = n;
        while(t%i == 0)
        {
            t/= i;
            res++;
        }
        if(t==1)
        {
            if(niga && !(res%2))
                continue;
            return res;
        }
    }
    return 1;
}
 
int main()
{
    io;
    int t;
    scanf("%i", &t);
    for(int i = 1; i <= t; i++)
    {
        ll n;
        scanf("%lld", &n);
        printf("Case %i: %lld\n", i, ihatebacteria(n));
    }
    return 0;
}
