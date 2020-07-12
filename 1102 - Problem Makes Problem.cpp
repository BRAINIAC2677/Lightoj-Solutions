/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<long long> vll;
typedef vector<int> vi;
 
#define io ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mod  1000000007
#define PI 2*acos(0.0)
 
const int N = 2000005;
 
ll bigmod(ll x, ll p)
{
    ll res = 1;
    while(p)
    {
        if(p&1)
            res = (res*x)%mod;
        x = (x*x)%mod;
        p >>= 1;
    }
    return res;
}
 
int32_t main()
{
    io;
    ll fac[N];
    fac[0] = 1;
    for(int i = 1; i<N; i++)
        fac[i] = fac[i-1]*i%mod;
    int t;
    cin>>t;
    for(int ca = 1; ca <=t; ca++)
    {
        int n, k;
        cin>>n>>k;
        ll ans = ((fac[n+k-1]%mod) * (bigmod(fac[k-1]*fac[n]%mod, mod-2)%mod))%mod;
        cout<<"Case " <<ca<< ": " << ans<<"\n";
    }
    return 0;
}
