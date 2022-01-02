#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  double r=((b-a)*(d-c)*1.0)/(b*d*1.0);
  double res=((a*1.0)/(b*(1-r)*1.0));
  printf("%.12lf\n",res);
  return 0;
}
