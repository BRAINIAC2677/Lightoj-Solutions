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
 
int n,mon[1005]; bool vis[1005];
double ex, nod;
vector<vector<int> > gra;
 
void dfs(int ver)
{
    vis[ver] = 1;
    nod++;
    ex += mon[ver];
    int l = gra[ver].size();
    for(int j = 0; j < l; j++)
    {
        int act = gra[ver][j];
        if(!vis[act])
            dfs(act);
    }
}
 
 
int main()
{
    io;
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc;i++)
    {
        memset(vis, 0, sizeof(vis));
        int m;
        double sum = 0, avg;
        cin >> n >> m;
        for(int j = 1; j<= n; j++)
        {
            cin >> mon[j];
            sum+= mon[j];
        }
        vector<vector<int> > v(n+2);
        swap(v, gra);
        while(m--)
        {
            int u, v;
            cin >> u >> v;
            gra[u].pb(v);
            gra[v].pb(u);
        }
        avg = sum / n;
        if(avg != (int)avg)
        {
            cout <<"Case " <<i << ": No\n";
            continue;
        }
        bool f = 1;
        for(int j = 1; j <= n; j++)
        {
            if(vis[j] == 0)
            {
                ex = 0;
                nod = 0;
                dfs(j);
                if(ex/nod != avg)
                {
                    f = 0;
                    break;
                }
            }
        }
        if(f==0)
            cout << "Case " << i <<": No\n";
        else
            cout <<"Case " << i << ": Yes\n";
    }
    return 0;
}
 
