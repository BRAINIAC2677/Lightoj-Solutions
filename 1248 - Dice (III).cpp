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
    int t, ca = 0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double ans = 0;
        for(int i = 1; i <=n; i++)
            ans += 1.0/i;
        ans *= n;
        printf("Case %i: %.9f\n", ++ca, ans);
    }
    return 0;
}
