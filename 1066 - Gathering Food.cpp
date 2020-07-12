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
 
int n, dis[12][12], dirx[] = {1, -1, 0,0}, diry[] = {0, 0,1, -1};
bool vis[12][12]; char grid[12][12];
 
int bfs(int x, int y, char d)
{
    memset(vis, 0, sizeof(vis));
    vis[x][y] = 1;
    dis[x][y] = 0;
    queue<pii> q;
    q.push(pii(x, y));
    while(!q.empty())
    {
        int actx = q.front().first, acty = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int xco = actx + dirx[i], yco = acty + diry[i];
            if(xco<0 || yco<0 || xco>=n ||yco>=n ||vis[xco][yco])
                continue;
            if(grid[xco][yco] == '.')
            {
                dis[xco][yco] = dis[actx][acty] +1;
                vis[xco][yco] = 1;
                q.push(pii(xco, yco));
            }
            else if(grid[xco][yco] == d)
            {
                grid[xco][yco] = '.';
                return dis[actx][acty] + 1;
            }
        }
    }
    return -1;
}
 
int main()
{
    io;
    int t;
    cin >>t;
    for(int i = 1;i <=t; i++)
    {
        int c;
        scanf("%[^\n]", c);
        cin >>n;
        map<char, pii> alp; char last = 'A';
        for(int a = 0; a < n; a++)
        {
            for(int b= 0; b< n ;b++)
            {
                cin >> grid[a][b];
                if(grid[a][b] >=65 && grid[a][b] <= 90)
                {
                    alp[grid[a][b]+1] = pii(a, b);
                    if(last < grid[a][b]+1)
                        last = grid[a][b] + 1;
                    if(grid[a][b] == 'A')
                        grid[a][b] = '.';
                }
            }
        }
        alp.erase(last);
        ll ans = 0;
        for(auto j: alp)
        {
            int tem = bfs(j.second.first, j.second.second, j.first);
            if(tem==-1)
            {
                ans = -1;
                break;
            }
            ans += tem;
        }
        if(ans == -1)
            cout <<"Case " <<i <<": Impossible\n";
        else
            cout << "Case " <<i <<": " << ans<<"\n";
    }
    return 0;
}
