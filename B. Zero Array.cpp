#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n+10],cumi=0,temp=0,paichi=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cumi+=a[i];
        maxi=max(maxi,a[i]);
    }
    if(cumi%2==0 && maxi<=(cumi/2))cout<<"YES";
    else cout<<"NO";
    return 0;
}
