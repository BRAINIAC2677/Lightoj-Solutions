/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int volume[1005], n, m;
 
bool possible(unsigned long long cap)
{
    //cout << "Cap: " << cap << endl;
    unsigned long long tot = 0;int cou = 1;
    for(int b = 0; b < n; b++)
    {
        if(tot + volume[b] <= cap)
        {
           // cout << " for" << endl;
            tot += volume[b];
            //cout << "tot: " << tot << endl;
        }
        else
        {
            cou++;
            tot = volume[b];
        }
    }
    if(cou <= m)
        return true;
    else
        return false;
}
 
unsigned long long bs(int low, unsigned long long high)
{
    unsigned long long mid, ans;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(possible(mid))
        {
            high = mid - 1;
            ans = mid;
        }
        else
            low = mid + 1;
    }
    return ans;
}
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        memset(volume, 0, sizeof(volume));
        unsigned long long total = 0;int maxi = 0;
        cin >> n >> m;
        for(int aa = 0; aa < n; aa++)
        {
            cin >> volume[aa];
            total += volume[aa];
            maxi = max(maxi, volume[aa]);
        }
        printf("Case %d: %llu\n", i, bs(maxi, total));
    }
    return 0;
}
