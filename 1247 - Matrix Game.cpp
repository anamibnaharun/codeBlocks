#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int row,col;
        cin>>row>>col;
        long long int piles[row+1],xsum;
        for(int j=0;j<row;j++)
        {
            piles[j]=0;
            for(int k=0;k<col;k++)
            {
                long long int x;
                cin>>x;
                piles[j]+=x;
            }
            if(j==0)xsum=piles[j];
            else xsum^=piles[j];
        }
        if(xsum)printf("Case %d: Alice\n",i);
        else printf("Case %d: Bob\n",i);
    }
    return 0;
}
