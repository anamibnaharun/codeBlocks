#include<bits/stdc++.h>
using namespace std;
    bool compare(pair<int,int> x, pair<int,int> y)
    {
        if(x.second >y.second)return true;
        else return false;
    }
    bool isLower(char ch)
    {
        int  x=ch-'a';
        if(x<26 && x>=0)return true;
        else return false;
    }
    int main()
    {
        string s;
        cin>>s;
        int mark[55];
        vector<int>pos;
        for(int i=0;i<55;i++)mark[i]=0;
        for(int i=0;i<s.length();i++)
        {
            int char2int;
            if(isLower(s[i]))char2int=s[i]-'a';
            if(!isLower(s[i]))
            {
                char2int=s[i]-'A';
                char2int+=26;
            }
            if(mark[char2int]==0)
            {
                pos.push_back(i);
            }
            mark[char2int]++;
        }
        vector<pair<int,int> > frequency;
        for(int i=0;i<pos.size();i++)
        {
            int char2int,ind=pos[i];
            if(isLower(s[ind]))char2int=s[ind]-'a';
            if(!isLower(s[ind]))
            {
                char2int=s[ind]-'A';
                char2int+=26;
            }
            frequency.push_back({ind,mark[char2int]});

        }
        sort(frequency.begin(),frequency.end() , compare);
        string res;
        for(int i=0;i<frequency.size();i++)
        {
            int ind=frequency[i].first,times=frequency[i].second;
            for(int j=0;j<times;j++)
            {
                res+=s[ind];
            }
        }
        cout<<res<<endl;
        return 0;
    }
