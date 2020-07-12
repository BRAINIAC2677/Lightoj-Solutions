/*BISMILLAH
THE WHITE WOLF*/
 
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
 
int possible[1005];
bool vis[1005];
vector<vector<int> > gra;
 
void dfs(int s)
{
    vis[s] = 1;
    possible[s]++;
    int l = gra[s].size();
    for(int i = 0; i < l; i++)
    {
        int act = gra[s][i];
        if(vis[act]==0)
            dfs(act);
    }
}
 
int main()
{
    io;
    int tc;
    cin >> tc;
    for(int i = 1; i<= tc; i++)
    {
        int k, n, m;
        memset(possible, 0, sizeof(possible));
        cin >> k >> n >> m;
        vector<vector<int> > t(n+2);
        swap(t, gra);
        int src[k];
        for(int a = 0; a < k; a++)
            cin >> src[a];
        while(m--)
        {
            int u, v;
            cin >> u >> v;
            gra[u].pb(v);
        }
        for(int a = 0; a < k; a++)
        {
            int act = src[a];
            memset(vis, 0, sizeof(vis));
            dfs(act);
        }
        int ans = 0;
        for(int j = 1; j<= n; j++)
        {
            if(possible[j] == k)
                ans++;
        }
        cout <<"Case " << i <<": " << ans<<"\n";
    }
    return 0;
}
