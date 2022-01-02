#include<bits/stdc++.h>
using namespace std;
bool compare(pair<char,int> x,pair<char,int> y)
{
    return x.first<y.first;
    /*
    if((x.first<=y.first))
        return (x.second>=y.second);
    else
    {
        pair<int,char> temp=x;
        x=y;
        y=temp;
        return (x.second>=y.second);
    }
    */
}
int findPreviousChar(vector<pair<char,int> >& sortedArray,char ch,int pos,int from,int to)
{
    while(to-from>1){
        int mid=(from+to)/2;
        if(sortedArray[mid].first > ch)
        {
            to=mid-1;
        }
        else if(sortedArray[mid].first == ch)
        {
            if(sortedArray[mid].second > pos) to=mid-1;
            else from=mid;
        }
        else from=mid;
    }
    for(int i=from;i<=to;i++)
    {
        if(sortedArray[i].first==ch && sortedArray[i].second==pos)
        {
            if(i-1>=0 && sortedArray[i-1].first==ch)
            {
                return sortedArray[i-1].second;
            }
            else return -1;
        }
    }
    return -1;
}
int main()
{
    string s;
    cin>>s;
    if(s.length()<=1) return s.length();
    vector<pair<char,int> > sortedChar;
    for(int i=0;i<s.length();i++)
    {
        sortedChar.push_back({s[i],i});
    }
    sort(sortedChar.begin(),sortedChar.end(),compare);
    int starti=0,endi=0,maxi=0;
    for(int i=0;i<s.length();i++)
    {
        int ind=findPreviousChar(sortedChar,s[i],i,0,s.length()-1);
        if(ind==-1 || ind<starti)
        {
            endi++;
        }
        else
        {
            maxi=max(maxi,((endi-starti)));
            endi++;
            starti=ind+1;
        }
    }
    if(maxi>0) cout<< maxi;
    else cout<< 0<<endl;
    return 0;
}
