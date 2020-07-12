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
 
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, blaire[25][101];
 
void me_before_u()
{
    for(int i = 0; i < 25; i++)
    {
        for(int j = 1; j<= 100; j++)
        {
            int x = 0, t = j;
            while(t%prime[i] == 0)
            {
                t/=prime[i];
                x++;
            }
            blaire[i][j] = x;
        }
    }
}
 
int main()
{
    io;
    int t;
    cin>>t;
    me_before_u();
    for(int i = 1; i<=t; i++)
    {
        int n;
        cin>>n;
        vector<pii> ans;
        for(int j = 0; j <25 && prime[j] <= n; j++)
        {
            int x = 0;
            for(int a = 1; a<= n; a++)
                x += blaire[j][a];
            ans.pb(pii(prime[j], x));
        }
        printf("Case %i: %i = ", i, n);
        int l = ans.size();
        for(int a = 0; a < l ;a++)
        {
            if(a!=l-1)
                printf("%i (%i) * ", ans[a].first, ans[a].second);
            else
                printf("%i (%i)\n", ans[a].first, ans[a].second);
        }
    }
    return 0;
}
