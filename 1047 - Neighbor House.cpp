/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include <stdio.h>
#include <limits.h>
#include <iostream>
using namespace std;
 
 
int main()
{
 
    int n;
    int a[23][5];
    int ans[23][5];
    int x;
    int t;
 
    scanf("%d", &t);
 
    for (int cs = 1; cs <= t; cs++) {
        scanf("%d", &n);
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &a[i][j]);
            }
        }
       
 
 
        for(int i = n; i >= 0; i--) {
            for (int prev = 2; prev >= 0; prev--) {
               
                x = INT_MAX;
 
                if( i == n) {
                    ans[i][prev] = 0;
                    continue;
                }
 
                for (int j = 0; j < 3; j++) {
                    if(j != prev) {
                        x = min(x, a[i][j] + ans[i+1][j]);
                    }
 
                }
 
                ans[i][prev] = x;
 
 
 
            }
 
 
        }
 
        printf("Case %d: %d\n",cs,  min(ans[0][0], min(ans[0][1], ans[0][2])));
 
 
    }
 
 
}
