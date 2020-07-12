/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
long long w, inp[35];
vector<long long > a, b;
 
long long create_a(long long i,long long sum, long long max)
{
    if(sum > w) {
        return 0;
    }
 
    if( i == max) {
        a.push_back(sum);
        return 0;
    }
 
    create_a(i+1, sum + inp[i], max);
    create_a(i+1, sum,max);
 
}
 
long long create_b(long long i,long long sum, long long max)
{
    if(sum > w) {
        return 0;
    }
    if( i == max) {
        b.push_back(sum);
        return 0;
    }
 
    create_b(i+1, sum + inp[i], max);
    create_b(i+1, sum,max);
 
}
 
int bs(long long ele,int siz)
{
    int low = 0, high = siz, mid, ans = -1;
    while(low <= high)
    {
        mid = (high + low) / 2;
        if(a[mid] + ele <= w)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans + 1;
}
 
 
int main()
{
    int tc;
    scanf("%i", &tc);
    for(int i = 1; i <= tc; i++)
    {
        a.clear(); b.clear();
        int n, ans = 0;
        scanf("%d %lld", &n, &w);
        for(int c = 0; c < n ;c++)
            scanf("%lld", &inp[c]);
        create_a(0, 0, n/2);
        create_b(n/2, 0, n);
        int la = a.size(), lb = b.size();
        sort(a.begin(), a.end());
        for(int j = 0; j < lb; j++)
            ans += bs(b[j], la -1);
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
