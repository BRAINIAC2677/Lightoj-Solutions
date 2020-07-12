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
 
ll gcd(ll a, ll b)
{
    return b==0?a:gcd(b, a%b);
}
 
int main()
{
    io;
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        ll ans = gcd(abs(c-a), abs(d-b)) + 1;
        cout <<"Case " <<i <<": " << ans <<"\n";
    }
    return 0;
}
 
