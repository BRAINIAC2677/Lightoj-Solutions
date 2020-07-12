/*BISMILLAH
THE WHITE WOLF*/
 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; i++)
    {
        string curr = "http://www.lightoj.com/", str;
        stack<string> backed, fwd;
        printf("Case %d:\n", i);
        while(1)
        {
            cin >> str;
            if(str[0] == 'Q')
                break;
            if(str[0] == 'V')
            {
                backed.push(curr);
                cin >> curr;
                while(!fwd.empty())
                    fwd.pop();
            }
            else if(str[0] == 'B')
            {
                if(backed.empty())
                {
                     printf("Ignored\n");
                     continue;
                }
                else
                {
                    fwd.push(curr);
                    curr = backed.top();
                    backed.pop();
                }
            }
            else
            {
                if(fwd.empty())
                {
                     printf("Ignored\n");
                     continue;
                }
                else
                {
                    backed.push(curr);
                    curr = fwd.top();
                    fwd.pop();
                }
            }
            cout << curr << endl;
        }
    }
    return 0;
}
