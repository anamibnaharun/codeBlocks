#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,m,n;
    cin>>m>>n>>k;
    int mat[m+10][n+10];
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        int arr[m+10][n+10],cumi[m+10][n+10];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cumi[i][j]=0;
                arr[i][j]=0;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cumi[i][j]=cumi[i][max(0,j-1)]+mat[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int l=max(i-k,0);l<=min(m-1,i+k);l++)
                {
                    arr[i][j]+=cumi[l][min(n-1,j+k)]-cumi[l][max(0,j-k)]+mat[l][max(0,j-k)];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
}
