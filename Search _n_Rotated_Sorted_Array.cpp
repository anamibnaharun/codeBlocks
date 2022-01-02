#include<bits/stdc++.h>
using namespace std;
int searchInRotatedArray(int arr[],int n,int val)
{
    int to=n-1,from=0;
    while(to>from)
    {
        int mid=(to+from)/2;
        //cout<<mid<<endl;
        if(arr[mid]>arr[to])
        {
            from=mid+1;
        }
        else to=mid;
    }
    cout<<to<<endl;
    to+=n-1;
    while(from<to)
    {
        int mid=(from+to)/2;
        if(arr[mid%n]<val)from=mid+1;
        else to=mid;
    }
    if(arr[to%n]==val)return to;
    return -1;

    //return 0;
}
int main()
{
    int n,val;
    cin>>n>>val;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    int res=searchInRotatedArray(arr,n,val);
    cout<<res<<endl;
    return 0;
}
