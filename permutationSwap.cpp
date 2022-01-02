#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void permutationSwap(string st,int i)
{
    if(i>=st.length())
    {
        res.push_back(st);
        //cout<<st<<endl;
        return;
    }
    for(int j=i;j<st.length();j++)
    {
        swap(st[i],st[j]);
        permutationSwap(st,i+1);
        swap(st[i],st[j]);
    }
    return;
}
int vis[20];
void permutationBacktrack(string st,int n)
{
    if(st.length()>=n)
    {
        res.push_back(st);
    }
    for(int j=0;j<n;j++)
    {
        if(!vis[j])
        {
            vis[j]=1;
            //st+=('A'+j);
            string nextSt=st;
            nextSt+=('A'+j);
            permutationBacktrack(nextSt,n);
            vis[j]=0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    string st;
    for(int i=0;i<n;i++)
    {
        st+=('A'+i);
    }
    for(int i=0;i<20;i++)vis[i]=0;
    permutationBacktrack("",n);
    for(int i=0;i<res.size();i++)cout<<res[i]<<endl;
    return 0;
}
