#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,found="microsoft";
    cin>>st;
    map<char,int>mark;
    int yes=1;
    for(int i=0;i<26;i++)
    {
        char ch='a'+i;
        mark[ch]=0;
    }
    for(int i=0;i<found.length();i++)
    {
        mark[found[i]]=1;
    }
    for(int i=0;i<st.length();i++)
    {
        mark[st[i]]=0;
    }
    for(int i=0;i<26;i++)
    {
        char ch='a'+i;
        if(mark[ch])
        {
            yes=0;
            break;
        }
    }
    if(yes) cout<<"We both love Microsoft!";
    else cout<<"Only I love Microsoft!";
    return 0;
}
