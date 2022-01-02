#include<bits/stdc++.h>
using namespace std;
int weight[200],funVal[200],dp[100001][101],n,totalWeight;
void initialize()
{
    for(int i=0;i<100001;i++)
    {
        for(int j=0;j<101;j++)
        {
            dp[i][j]=-1;
        }
    }
}
int fillTheBag(int totalWeighti,int pos)
{
    if(pos>=n)return 0;
    if(dp[totalWeighti][pos]!=-1)return dp[totalWeighti][pos];

     if(totalWeighti-weight[pos]>=0)dp[totalWeighti][pos]=max(dp[totalWeighti][pos],funVal[pos]+fillTheBag(totalWeighti-weight[pos],pos+1));
    dp[totalWeighti][pos]=max(dp[totalWeighti][pos],fillTheBag(totalWeighti,pos+1));
    //cout<<"rec "<<dp[totalWeighti][pos]<<endl;
    return dp[totalWeighti][pos];
}
int main()
{
    int testCase;
    cin>>testCase;
    for(int i=1;i<=testCase;i++)
    {
        cin>>n>>totalWeight;
        for(int i=0;i<n;i++)
        {
            cin>>weight[i]>>funVal[i];
        }
        initialize();
        cout<<"Case "<<i<<": "<<fillTheBag(totalWeight,0);
        if(i!=testCase)cout<<endl;
    }
    return 0;
}
