#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long int a[n+9],count1=1,res=0,cumi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    if(n==1)
    {
        cout<<a[0]+k;
    }
    else
    {
    int mid=((n+1)/2)-1;
    for(int i=mid+1;i<n;i++)
    {
                res=a[i];
            if(k<=(cumi+((a[i]-a[((n+1)/2)-1]))) )
            {
                cumi+=((a[i]-a[mid]));
            }
            else break;
    }
    cout<<cumi<<endl;
     if(cumi<k)
    {
        long long int add=((k-cumi)/((n+1)/2));
        cout<<res+add;
    }
    else cout<<res;
    }

    return 0;
}
