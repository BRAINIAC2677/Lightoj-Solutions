/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(false);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mod 1000003
#define pii pair<int, int>
 
bool vis[30005];
int dis[30005], n, ind;
ll ma;
vector<vector<pii> > v;
 
void modi(int nod, ll di)
{
    vis[nod] = 1;
    if(di > ma)
    {
        ma = di;
        ind = nod;
    }
    int l = v[nod].size();
    for(int i = 0; i < l ; i++)
    {
        int act = v[nod][i].first;
        if(vis[act])
            continue;
        dis[act] = dis[nod] + v[nod][i].second;
        modi(act, dis[act]);
    }
}
 
int main()
{
    io;
    int t;
    cin >> t;
    for(int i = 1; i <= t;i++)
    {
        cin >> n;
        vector<vector<pii> > t(n);
        swap(t, v);
        int j = n-1;
        while(j--)
        {
            int x, y, w;
            cin >> x >> y >>w;
            v[x].pb(pii(y, w));
            v[y].pb(pii(x, w));
        }
        memset(vis, 0, sizeof(vis));
        dis[0] = 0;
        ma = INT_MIN;
        modi(0, dis[0]);
        memset(vis, 0, sizeof(vis));
        dis[ind] = 0;
        ma = INT_MIN;
        modi(ind, 0);
        cout <<"Case " << i <<": " << ma <<"\n";
    }
    return 0;
}
 
