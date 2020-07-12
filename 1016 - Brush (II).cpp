/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++)
    {
        int a, n, w,x, cou = 0;
        deque<int> dq;
        scanf("%[^\n]", &a);
        scanf("%i%d", &n , &w);
        while(n--)
        {
            scanf("%i%i", &a, &x);
            //cout << "INput : " << x << endl;
            dq.push_back(x);
        }
        sort(dq.begin(), dq.end());
        while(dq.size() > 0)
        {
            //cout << "Outer While" << endl;
            int check = dq.front() + w;
            cou++;
            //cout << cou << endl;
            while(dq.size() != 0 && dq.front() <= check)
            {
                dq.pop_front();
                //cout << "Inner while" << endl;
            }
 
        }
        //cout << "Out of While" << endl;
        printf("Case %i: %i\n", i, cou);
    }
    return 0;
}
