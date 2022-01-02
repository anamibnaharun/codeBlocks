#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>h;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    h.push_back(x);
    }
    stack <pair<int,int> > traverse;
    pair<int,int> top;
    top=make_pair(0,0);
    long  maxi=0,a=1;
    for (int  i=0;i<h.size();i++)
    {
        if ( h[i]>=top.first)
        {
            traverse.push(make_pair(h[i],i));
            top=make_pair(h[i],i);
        }
        else
        {
            pair<int,int> temp=top;
            while( h[i]<top.first)
            {
                traverse.pop();
                pair<int,int>cur=traverse.top();
                maxi=max(maxi,(temp.second-cur.second+1)*cur.first*a);
                top=cur;
            }
        }

    }
    pair<int,int> temp=top;
    maxi=max(maxi,top.first*a);
    while(traverse.size()>1)
    {
        traverse.pop();
        pair<int,int>cur=traverse.top();
        maxi=max(maxi,(temp.second-cur.second+1)*cur.first*a);
        top=cur;
    }
    cout<<maxi;
    return 0;
}
