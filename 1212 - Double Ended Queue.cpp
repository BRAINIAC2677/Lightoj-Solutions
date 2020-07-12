/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    cin >> tc;
    for(int i =1 ; i <= tc; i++)
    {
        int s, m, cou = 0;
        cin >> s >> m;
        string str;
        deque<int> dq;
        cout << "Case " << i << ":" << endl;
        while(m--)
        {
            int x;
            cin >> str;
            if(str[4] == 'L')
            {
                //cout << " Loop 1" << endl;
                cin >> x;
                if(cou < s)
                {
                    cout << "Pushed in left: " << x << endl;
                    dq.push_back(x);
                    cou++;
                }
                else
                    cout << "The queue is full" << endl;
            }
 
            else if(str[4] == 'R')
            {
                //cout << " Loop 2" << endl;
                cin >> x;
                if(cou < s)
                {
                    cout << "Pushed in right: " << x << endl;
                    dq.push_front(x);
                    cou++;
                }
                else
                    cout << "The queue is full" << endl;
            }
 
            else if(str[3] == 'L')
            {
                if(cou>0)
                {
                    //cout << " Loop 3" << endl;
                    cout << "Popped from left: " << dq.back() << endl;
                    cou--;
                    dq.pop_back();
                }
                else
                    cout << "The queue is empty" << endl;
 
            }
            else
            {
                if(cou >0)
                {
                    //cout << "Loop 4" << endl;
                    cout << "Popped from right: "<<dq.front()<< endl;
                    cou--;
                    dq.pop_front();
                }
                else
                    cout << "The queue is empty" << endl;
            }
        }
    }
    return 0;
}
