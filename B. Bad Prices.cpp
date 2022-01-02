#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back({x});
    }
    int temp=v[n-1],count1=0;
    for(int i=n-1;i>=0;i--)
    {
        //cout<<i<<" "<<v[i].first<<" "<<v[i].second<<endl;
        if(temp>=v[i])
        {
            temp=v[i];

        }
        else count1++;
    }
    cout<<count1<<endl;
    }
    return 0;
}
