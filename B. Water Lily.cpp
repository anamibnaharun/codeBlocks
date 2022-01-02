#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,l;
    cin>>h>>l;
    cout<<setprecision(15)<<((((h*h)+(l*l))/((2.0*h)))-h);
    return 0;
}
