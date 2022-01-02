#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mark;
    string st;
    int counti=0;
    for(int i=0;i<26;i++)
    {
        char ch='A'+i;
        mark[ch]=0;
    }
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        mark[st[i]]++;
    }
    for(int i=0;i<26;i++)
    {
        char ch='A'+i;
        if(mark[ch]==0)counti++;
    }
    cout<<(counti);
    return 0;
}
