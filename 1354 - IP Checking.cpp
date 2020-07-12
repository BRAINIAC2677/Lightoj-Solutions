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
        int dec[4], bin[4];
        scanf("%i.%i.%i.%i", &dec[0], &dec[1], &dec[2], &dec[3]);
        scanf("%d.%d.%d.%d", &bin[0], &bin[1], &bin[2], &bin[3]);
 
        int flag = 1;
        for(int j = 0; j < 4; j++)
        {
            int bintodec = 0, power = 0;
            int act = bin[j], re;
            while(act)
            {
                re = act % 10;
                act /= 10;
                bintodec += pow(2, power) * re;
                power++;
            }
            //cout << "j : " << j << " dec: " << dec[j] << " bintodec: " << bintodec << endl;
            if(bintodec != dec[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
    return 0;
}
