/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false)
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mod 1000000007
#define pii pair<int, int>
#define PI 2*acos(0.0)
 
vector<int> prime;
 
 
void seive()
{
    bitset<10000005> mark;
    for(int i = 3; i*i <= 1000000; i+=2)
        if(!mark[i])
            for(int j = i*i; j <= 10000000; j+=(i<<1))
                mark[j] = 1;
    prime.pb(2);
    for(int i = 3; i<= 10000000; i+=2)
        if(!mark[i])
            prime.pb(i);
}
 
int main()
{
    io;
    int t;
    scanf("%i", &t);
    seive();
    for(int i = 1; i<=t; i++)
    {
        ll n, ans = 1;
        scanf("%lld", &n);
        for(int p:prime)
        {
            if(p*p > n)
                break;
            int x = 0;
            while(n%p == 0)
            {
                n/=p;
                x++;
            }
            ans *= ((x<<1) | 1);
        }
        if(n>1)
            ans*=3;
        //ans = (ans>>1)|1;
        ans = (ans/2) + 1;
        printf("Case %i: %lld\n", i,ans);
    }
    return 0;
}
