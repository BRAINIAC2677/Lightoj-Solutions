/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false)
#define ll long long
 
double heart[1000007];
 
void heartbeat()
{
    for(int i = 1; i<=1000005; i++)
        heart[i] = heart[i-1] + 1.0/i;
}
 
int main()
{
    int t;
    cin>>t;
    heartbeat();
    for(int i = 1; i<=t; i++)
    {
        int n;
        cin>>n;
        if(n < 1000007)
            printf("Case %i: %.10f\n", i, heart[n]);
        else
        {
            double ans = log(n+.5) + 0.5772156649;
            printf("Case %i: %.10f\n", i, ans);
        }
    }
    return 0;
}
