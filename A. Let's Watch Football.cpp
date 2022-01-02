#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,i,t;
  cin>>a>>b>>c;
  int temp=(a*c);
  for( i=0;(i*b)+(b*c)<temp;i++);
  cout<<(i)<<endl;
  return 0;
}
