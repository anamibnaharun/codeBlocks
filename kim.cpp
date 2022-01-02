#include<bits/stdc++.h>
using namespace std;
int inf=1000000;
int N,res=inf,sx,sy,tx,ty;
int weight[20][20],gx[20],gy[20],vis[20],cx[20],cy[20];
int disClac(int x1,int y1,int x2,int y2)
{
    return abs(x1-x2)+abs(y1-y2);
}
void buildGraph()
{
    int ind=0;
    gx[ind]=sx,gy[ind++]=sy;
    gx[ind]=tx,gy[ind++]=ty;
    for(int i=0;i<N;i++)
    {
        gx[ind]=cx[i],gy[ind++]=cy[i];
    }
    for(int i=0;i<ind;i++)
    {
        for(int j=0;j<ind;j++)
        {
            weight[i][j]=disClac(gx[i],gy[i],gx[j],gy[j]);
        }
    }
}
void backtrack(int count1,int pre,int val)
{
    if(count1>=N)
    {
        val+=weight[pre][1];
        if(val<res)res=val;
        return;
    }
    for(int i=2;i<N+2;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            backtrack(count1+1,i,val+weight[pre][i]);
            vis[i]=0;
        }
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
         cin>>N;
         cin>>sx>>sy;
         cin>>tx>>ty;
         for(int i=0;i<N;i++)
         {
            cin>>cx[i]>>cy[i];
         }

        buildGraph();
        backtrack(0,0,0);
        cout<<res<<endl;
    }
    return 0;
}
