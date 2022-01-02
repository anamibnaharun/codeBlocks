#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,num,dp[101][101];
        cin>>n>>num;
        vector<int> cuts;
        for(int i=0;i<num;i++)
        {
            int x;
            cin>>x;
            cuts.push_back(x);
        }
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)dp[i][j]=-1;
        }
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(),cuts.end());
        cout<<cuts.size()<<endl;
        for(int i=cuts.size()-1;i>=0;i--)
        {
            for(int j=i+1;j<=cuts.size()-1;j++)
            {
                if(i==j)
                {
                    dp[i][j]=0;
                    continue;
                }
                if(i+1==j)
                {
                    //dp[i][j]=cuts[j]-cuts[i];
                    dp[i][j]=0;
                    continue;
                }
                int cost=cuts[j]-cuts[i];
                int mini;
                if(dp[i][j]==-1)mini=1000000000;
                else mini=dp[i][j];
                for(int k=i+1;k<j;k++)
                {
                    cout<<i<<" "<<k<<" "<<j<<endl;
                    mini=min(mini,cost+dp[i][k]+dp[k][j]);
                }
                dp[i][j]=mini;
            }
        }
        //return dp[0][cuts.size()-1];
        cout<<dp[0][cuts.size()-1]<<endl;
        return 0;
}
