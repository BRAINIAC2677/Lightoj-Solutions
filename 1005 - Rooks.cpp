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
 
int32_t main()
{
    io;
    ll bin[31][31];
    for(int i = 0; i< 31; i++)
    {
        for(int j =0 ;j <= i;j ++)
        {
            if(j == 0 || j == i)
                bin[i][j] = 1;
            else
                bin[i][j] = bin[i-1][j-1] + bin[i-1][j];
        }
    }
    ll fac[31];
    fac[0] = 1;
    for(int i = 1; i < 31; i++)
        fac[i] = fac[i-1]*i;
    int t;
    cin>>t;
    for(int ca = 1; ca <= t; ca++)
    {
        int n, k;
        cin>>n>>k;
        ll ans;
        if(k > n)
            ans = 0;
        else
            ans = bin[n][k] * bin[n][k] * fac[k];
        cout<<"Case " << ca <<": " << ans<<"\n";
    }
    return 0;
}
