/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a <= 10)
            cout << "0 " << a << endl;
        else
            cout << "10 " << a - 10 << endl;
    }
    return 0;
}
