
#include<bits/stdc++.h>
using namespace std;

int main()
{
    printf("Enter source (x,y):\n");
    int x1,y1,n;
    cin>>x1>>y1;
    printf("number of destination :\n");
    cin>>n;
    int x[n+10],y[n+10];
    for(int i=0;i<n;i++)
    {
      printf("Enter destination (x,y): ");
      cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++)
    {
        int r=0,l=0,u=0,d=0;
        if(x[i]<=x1)
         {
            l=x1-x[i];
         }
        if(x[i]>x1)
        {
            r=(x[i]-x1);
        }
        if(y[i]<=y1)
        {
            u=y1-y[i];
        }
        if(y[i]>y1)
        {
            d=y[i]-y1;
        }

        printf("Movements for %d , %d to %d , %d  are :\n",x1,y1,x[i],y[i]);
        for(int j=0;j<l;j++)cout<<"left ";
        for(int j=0;j<r;j++)cout<<"right ";
        for(int j=0;j<u;j++)cout<<"up ";
        for(int j=0;j<d;j++)cout<<"down ";
        cout<<"\n";
    }


}
