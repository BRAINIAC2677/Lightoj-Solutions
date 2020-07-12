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
    int t, ca = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi x(n), y(n);
        for(int i = 0; i< n;i++)
            cin>>x[i] >>y[i];
        vector<pii > cnt;
        for(int i = 0; i < n;i++)
            for(int j = i+1; j< n;j++)
                cnt.pb({x[i]+x[j], y[i]+y[j]});
 
        sort(cnt.begin(), cnt.end());
 
        ll ans = 0;
        int l = cnt.size(), ac = 1;
 
        for(int i = 0; i< l-1; i++)
        {
            if(cnt[i] == cnt[i+1])
                ac++;
            else
            {
                ans += 1LL*ac*(ac-1)/2;
                ac = 1;
            }
        }
        ans += 1LL*ac*(ac-1)/2;
        cout<<"Case " << ca++<<": " << ans<<"\n";
    }
    return 0;
}
