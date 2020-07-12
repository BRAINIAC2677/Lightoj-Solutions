/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
bool check(int n, int pos)
{
    return (bool)(n & (1 << pos));
}
 
int main()
{
    int tc;
    scanf("%i", &tc);
    for(int i = 1; i<= tc;i++)
    {
        int n, arr[31];
        scanf("%i", &n);
        for(int j = 0; j < 31; j++)
        {
            if(check(n, j))
                arr[j] = 1;
            else
                arr[j] = 0;
        }
        reverse(arr, arr+ 31);
        next_permutation(arr, arr+31);
        reverse(arr, arr + 31);
        int ans = 0;
        for(int j = 0; j < 31; j++)
        {
            if(arr[j])
                ans += pow(2, j);
        }
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
