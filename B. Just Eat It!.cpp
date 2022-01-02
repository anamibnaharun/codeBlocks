#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,yes=0;
        cin>>n;
        long long int csum[n+10],a[n+10];
        for(int i=0;i<=n;i++)csum[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i)csum[i]=csum[i-1]+a[i];
            else csum[i]=a[i];
        }
        long long int sum=0,maxi=0;
        int l=n;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                sum=0;
            }
            else
            {
                sum+=a[i];
                maxi=max(maxi,sum);
            }
        }
        if(maxi<cumi[n-1])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
