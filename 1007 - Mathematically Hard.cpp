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
#define h 5000000
 
int tot[h+3];
unsigned ll sum[h+3];
 
void totient()
{
    for(int i = 2; i<= h; i++)
        tot[i] = i;
    for(int i = 2; i <=h; i++)
    {
        if(tot[i] == i)
        {
            for(int j = i; j <=h; j += i)
                tot[j] -= tot[j]/i;
        }
    }
}
 
void calc()
{
    sum[1] = 0;
    for(int i = 2; i<= h; i++)
    {
        sum[i] = tot[i];
        sum[i]*= tot[i];
        sum[i] += sum[i-1];
    }
}
 
int main()
{
    io;
    totient();
    calc();
    int t, a, b;
    cin>>t;
    for(int i = 1; i<= t; i++)
    {
        cin>> a>>b;
        unsigned ll ans = sum[b] - sum[a-1];
        cout <<"Case " << i <<": " << ans <<"\n";
    }
    return 0;
}
