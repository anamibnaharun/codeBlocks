#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   cin>>n;
   if(n==1)
   {
     int res=1;
     cout<<res<<endl;
   }
   else if(n==2)
   {
    int res=2;
     cout<<res<<endl;
   }
   else if(n%2==1)
   {
     long long int res=n*(n-1)*(n-2);
     cout<<res<<endl;
   }
   else if(n%6==0)
   {
     long long int res=(n-1)*(n-2)*(n-3);
     cout<<res<<endl;
   }
   else
   {
   long long int res=n*(n-1)*(n-3);
     cout<<res<<endl;
  }
}
