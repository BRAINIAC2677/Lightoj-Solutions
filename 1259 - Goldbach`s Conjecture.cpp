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
 
bool pr[5000005];
vector<int> prime;
 
void seive()
{
    for(int i = 1; i <= 1581; i++)
    {
        if(!pr[i])
        {
            int no = 2*i + 1;
            for(int j = no*no; j <= 10000000; j += (2*no))
                pr[(j-1)/2] = 1;
        }
    }
    for(int i = 1; i <= 5000000; i++)
        if(!pr[i])
            prime.pb(2*i + 1);
}
 
int main()
{
    io;
    seive();
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        int n, ans = 0;
        cin>>n;
        if(n==4)
        {
            cout <<"Case " <<i<<": " << 1 <<"\n";
            continue;
        }
        for(int p: prime)
        {
            if(p > n/2)
                break;
            if(!pr[(n-p-1)/2])
                ans++;
        }
        cout <<"Case " <<i <<": " << ans <<"\n";
    }
    return 0;
}
