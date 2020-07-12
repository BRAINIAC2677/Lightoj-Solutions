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
 
bool vis[505];vector< vector<pii> > v;
int n, dis[505];
 
void djikstra(int s)
{
    for(int i = 0; i < n; i++)
    {
        vis[i] = 0;
        dis[i] = INT_MAX;
    }
    dis[s] = 0;
    priority_queue<pii, vector<pii> ,greater<pii> > p;
    p.push(pii(0, s));
    while(!p.empty())
    {
        int nod = p.top().second;
        p.pop();
        if(vis[nod])
            continue;
        vis[nod] = 1;
        int l = v[nod].size();
        for(int j = 0; j < l; j++)
        {
            int anod = v[nod][j].first, w = v[nod][j].second;
            int m = max(dis[nod], w);
            if(dis[anod] > m)
            {
                dis[anod] = m;
                p.push(pii(dis[anod], anod));
            }
        }
    }
    for(int a = 0; a<n; a++)
    {
        if(dis[a] == INT_MAX)
            cout <<"Impossible\n";
        else
            cout << dis[a] <<"\n";
    }
}
 
 
int main()
{
    io;
    int t;
    cin >> t;
    for(int i = 1; i<= t; i++)
    {
        int m, a, s;
        scanf("%[^\n]", a);
        cin  >> n >>m;
        vector<vector<pii> > t(n+3);
        swap(v, t);
        while(m--)
        {
            int u, e, w;
            cin >> u >> e >> w;
            v[u].pb(pii(e, w));
            v[e].pb(pii(u, w));
        }
        cin >>s;
        cout <<"Case " <<i <<":\n";
        djikstra(s);
    }
    return 0;
}
