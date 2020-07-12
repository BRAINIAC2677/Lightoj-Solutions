/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mod 1000000007
#define pii pair<int, int>
 
vector<int> prime;
 
void seive()
{
    bitset<500005> ck;
    for(int i = 3; i*i <= 500000; i+=2)
        if(!ck[i])
            for(int j=i*i; j <= 500000; j+= (i<<1))
                ck[j] = 1;
    prime.pb(2);
    for(int j = 3; j<= 500000; j+=2)
        if(!ck[j])
            prime.pb(j);
}
 
ll bigmod(ll x, ll p)
{
    ll res = 1;
    while(p>0)
    {
        //cout << "x: " <<x <<" P: " << p <<"\n";
        if(p&1)
            res = (res*x)%mod;
        x = (x*x)%mod;
        p >>= 1;
    }
    //cout <<"res: " << res <<"\n";
    return res;
}
 
int main()
{
    io;
    seive();
    int t;
    cin>>t;
    for(int i = 1; i<= t; i++)
    {
        ll n, m;
        ll ans = 1;
        cin>>n >>m;
        for(int p:prime)
        {
            if(p*p > n)
                break;
            ll x = 0;
            while(n%p == 0)
            {
                n/= p;
                x++;
            }
            ans = (ans*(bigmod(p, m*x+1)-1+mod))%mod;
            ans = (ans* bigmod(p-1, mod-2))%mod;
        }
        if(n>1)
        {
            ans = (ans*(bigmod(n, m+1)-1+mod))%mod;
            ans= (ans* bigmod(n-1, mod-2))%mod;
        }
        cout <<"Case " << i <<": " << ans%mod <<"\n";
    }
    return 0;
}
