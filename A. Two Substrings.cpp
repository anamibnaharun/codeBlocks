#include<bits/stdc++.h>
using namespace std;
int main()
{
   string st;
   cin>>st;
   int hmm=0,ab=0,ba=0;
   vector<int>sta,stb;
   for(int i=0;i<st.length();i++)
   {
     if(i==0)continue;
     else if(st[i]=='A' && st[i-1]=='B')
     {
       ba=1;
       stb.push_back(i-1);
     }
     else if(st[i]=='B' && st[i-1]=='A')
     {
       ab=1;
       sta.push_back(i-1);
     }
   }

   if(ab==1 && ba==1 && abs(sta[sta.size()-1]-stb[0])>=2)cout<<"YES"<<endl;
   else if(ab==1 && ba==1 && abs(stb[stb.size()-1]-sta[0])>=2)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   return 0;
}
