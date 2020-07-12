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
 
string s;
int l;
ll dp[33][2][2][33];
 
ll cnt(int pos, bool pre, bool f, int curr)
{
    if(pos == l)
        return curr;
    if(dp[pos][pre][f][curr] != -1)
        return dp[pos][pre][f][curr];
    ll ans = 0;
    if(f)
    {
        ans += cnt(pos+1, 0, f, curr);
        if(pre)
            ans += cnt(pos+1, 1, f, curr+1);
        else
            ans +=cnt(pos+1, 1, f, curr);
    }
    else if(s[pos] == '0')
        ans += cnt(pos+1, 0, 0, curr);
    else if(pre)
        ans +=cnt(pos+1, 0, 1, curr) + cnt(pos+1, 1, 0, curr+1);
    else
        ans += cnt(pos+1, 0, 1, curr) + cnt(pos+1, 1, 0, curr);
    return dp[pos][pre][f][curr] = ans;
}
 
 
int main()
{
    io;
    int t;
    cin>>t;
    for(int i = 1; i <=t; i++)
    {
        int n;
        cin>>n;
        if(!n)
        {
            cout <<"Case " <<i <<": " << "0\n";
            continue;
        }
        l = log2(n);
        bitset<32> bin(n);
        s.clear();
        for(int j = 0; j<=l; j++)
            s += (char)(bin[j] + '0');
        reverse(s.begin(), s.end());
        l++;
        memset(dp, -1, sizeof(dp));
        cout<<"Case " << i <<": "<<cnt(0,0, 0, 0) <<"\n";
    }
    return 0;
}
