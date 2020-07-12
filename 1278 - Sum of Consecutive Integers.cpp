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
 
 
vector<int> prime;
 
void seive()
{
    bitset<10000005> ck;
    for(int i = 3; i*i <= 10000000; i+=2)
        if(!ck[i])
            for(int j = i*i;  j<= 10000000; j+=(i<<1))
                ck[j]= 1;
    for(int j = 3; j <= 10000000; j+=2)
        if(!ck[j])
            prime.pb(j);
}
 
 
int main()
{
    io;
    seive();
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++)
    {
        ll n;
        cin>>n;
        ll ans = 1;
        while(!(n&1))
            n/=2;
        for(int p: prime)
        {
            if(p*p>n)
                break;
            int x = 0;
            while(n%p==0)
            {
                n/= p;
                x++;
            }
            ans *= (x+1);
        }
        if(n>1)
            ans*= 2;
        cout <<"Case " <<i <<": "<< ans-1 <<"\n";
    }
    return 0;
}
