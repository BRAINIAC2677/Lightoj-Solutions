/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
unsigned long long fib[21];
 
void fibo()
{
    fib[0] = fib[1] = 1;
    for(int j = 2; j <= 20; j++)
        fib[j] = fib[j-1] * j;
}
 
int main()
{
    fibo();
   //for(int j = 0; j < 21; j++)
        //printf("%llu\n", fib[j]);
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++)
    {
        unsigned long long x;
        vector<int> aa;
        scanf("%llu", &x);
        for(int j = 20; j >= 0; j--)
        {
            if(x >= fib[j])
            {
                aa.push_back(j);
                x -= fib[j];
                 //printf("Fib: %d  x : %d\n", fib[j], x);
            }
        }
        if(x)
            printf("Case %d: impossible\n", i);
        else
        {
            printf("Case %d: ", i);
            int l = aa.size();
            for(int j = l-1; j >= 0; j--)
            {
                if(j==0)
                    printf("%d!\n", aa[j]);
                else
                    printf("%d!+", aa[j]);
            }
        }
    }
    return 0;
}
