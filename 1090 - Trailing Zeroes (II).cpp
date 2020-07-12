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
 
int wasp[500005];
 
void climax()
{
    for(int i = 1; i <= 500000; i++)
    {
        int even = 2*i, x = 0;
        while(even%2 == 0)
        {
            even/= 2;
            x++;
        }
        wasp[i] = wasp[i-1] + x;
    }
}
 
int trailer(int x)
{
    int aa=0;
    while(x>=5)
    {
        x = x/5;
        aa += x;
    }
    return aa;
}
 
int main()
{
    io;
    climax();
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n, r, p, q;
        cin>>n>>r>>p>>q;
        int x = 0, ans, two = p, y = 0;
        while(p%5 == 0)
        {
            x++;
            p/=5;
        }
        while(two%2==0)
        {
            y++;
            two/=2;
        }
        x = trailer(n) - trailer(r) - trailer(n-r) + x*q;
        y = y*q + wasp[n/2] - wasp[r/2] - wasp[(n-r)/2];
        ans = min(x, y);
        cout << "Case " << i <<": " <<ans <<"\n";
    }
    return 0;
}
