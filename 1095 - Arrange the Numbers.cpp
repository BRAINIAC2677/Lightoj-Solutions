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
 
const int N = 1002;
 
int fac[N];
 
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
 
ll ncr(int n, int r)
{
    if(r == 0 || r == n)
        return 1;
    return (fac[n]%mod * (bigmod(1LL*fac[r]*fac[n-r]%mod, mod-2)%mod))%mod;
}
 
int32_t main()
{
    io;
    fac[0] = 1;
    for(int i = 1; i < N; i++)
        fac[i] = 1LL*fac[i-1]*i%mod;
    int t, ca = 0;
    cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        ll ans = fac[n-k];
        for(int i = 1; i<= m-k; i++)
        {
            if(i&1)
                ans = (ans - ncr(m-k, i)*fac[n-k-i] + mod)%mod;
            else
                ans = (ans + ncr(m-k, i)*fac[n-k-i])%mod;
        }
        ans = (ans + mod)%mod;
        ans = (ans*ncr(m, k))%mod;
        cout<<"Case " << ++ca<<": " << ans<<"\n";
    }
    return 0;
}
