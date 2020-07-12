/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i= 1;i <= t;i++)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        int dif = arr[2] * arr[2] - arr[1]*arr[1] - arr[0] *arr[0];
        if (dif == 0)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
