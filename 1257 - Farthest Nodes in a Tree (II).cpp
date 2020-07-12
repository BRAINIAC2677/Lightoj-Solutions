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
#define pli pair<long, int>
 
ll cost[30005], cost2[30005];
vector<vector<pii> > adj;
ll ans, ind;
 
void dfs(int s, int dis, ll cost[])
{
    if(ans < dis)
    {
        ans = dis;
        ind = s;
    }
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int nod = q.front();
        q.pop();
        int l = adj[nod].size();
        for(int i = 0; i < l ;i++)
        {
            int act = adj[nod][i].first, w = adj[nod][i].second;
            if(cost[act] == -1)
            {
                cost[act] = cost[nod] + w;
                dfs(act, cost[act], cost);
            }
        }
    }
}
 
int main()
{
    io;
    int t;
    scanf("%i", &t);
    for(int i = 1; i<= t; i++)
    {
        int n;
        scanf("%i", &n);
        vector<vector<pii> > v(n+2);
        swap(v, adj);
        int j = n -1;
        while(j--)
        {
            int u, v, w;
            scanf("%i %i %i" ,&u, &v, &w);
            adj[u].pb(pii(v, w));
            adj[v].pb(pii(u, w));
        }
 
        memset(cost, -1, sizeof(cost));
        cost[0]  =0;
        ans = -1;
        dfs(0, 0, cost);
 
        memset(cost, -1, sizeof(cost));
        cost[ind] = 0;
        ans = -1;
        dfs(ind, 0, cost);
 
        memset(cost2, -1, sizeof(cost2));
        cost2[ind] = 0;
        ans = -1;
        dfs(ind, 0, cost2);
        printf("Case %i:\n", i);
        for(int i = 0; i < n; i++)
        {
           printf("%lld\n", max(cost[i], cost2[i]));
        }
    }
    return 0;
}
