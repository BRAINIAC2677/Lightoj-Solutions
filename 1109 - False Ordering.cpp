/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
vector<pair<int, int>> asif(1001);
 
bool com(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second != b.second)
        return a.second < b.second;
    return a.first > b.first;
}
 
int main()
{
 
    for(int i = 1; i <= 1000; i ++)
    {
        asif[i].first = i;
        asif[i].second = 0;
    }
    for(int j = 1; j <= 1000; j++)
    {
        for(int a = j; a <= 1000; a += j)
            asif[a].second++;
    }
    sort(asif.begin(), asif.end(), com);
    int n;
    cin >> n;
    for(int b = 1; b <= n; b++)
    {
        int x;
        cin >> x;
        printf("Case %d: %d\n", b, asif[x].first);
    }
    return 0;
}
