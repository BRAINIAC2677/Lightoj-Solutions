/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;

int arr[20][20];
bool visited[20][20];
int w, h;

int cou(int row ,int col)
{
    int dir1[] = {0, 0, -1, 1};
    int dir2[] = {1, -1, 0, 0};
    int surr = 0;
    if((row >= 0 && row < h) && (col >= 0 && col < w))
    {
        if(arr[row][col] == 0)
            return 0;
        if(! visited[row][col])
        {
            visited[row][col] = 1;
            for(int i = 0; i < 4; i++)
            {
                surr += cou(row - dir1[i], col - dir2[i]);
            }
            return surr + 1;
        }
    }
    return 0;
}

int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        memset(arr, 0 , sizeof(arr));
        memset(visited, 0, sizeof(visited));

        pair<int, int> strt;
        cin >> w >> h;
        for(int a = 0; a < h; a++)
        {
            for(int b = 0; b < w ; b++)
            {
                char inp;
                cin >> inp;
                if(inp == '.')
                    arr[a][b] = 1;
                else if(inp == '#')
                    arr[a][b] = 0;
                else
                {
                    strt.first = a;
                    strt.second = b;
                    arr[a][b] = 1;
                }
            }
        }

        int res = cou(strt.first, strt.second);
        printf("Case %d: %d\n", i, res);
    }
    return 0;
}
