#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int n;
        cin>>n;
        long long int xsum;
        long long int x;
        int counti=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(x==1)counti++;
            if(j==0)xsum=x;
            else xsum^=x;
        }
        if((n==counti && counti%2) || (xsum==0 && counti!=n) )
        {
            printf("Case %d: Bob\n",i);
        }
        else
        {
            printf("Case %d: Alice\n",i);
        }
    }
    return 0;
}

