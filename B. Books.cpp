#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t;
  vector<long long int>v;
  cin>>n>>t;
  for(int i=0;i<n;i++)
  {
    long long int x;
    cin>>x;
    v.push_back(x);
  }
  long long int count1=0;
  long long int sum=0,max1=0;
  for(int i=0,j=0;i<v.size() && j<=i;)
  {

    if(sum+v[i]>t)
    {
      max1=max(count1,max1);
      if(j<i){
      sum-=v[j];
      j++;
      count1--;
//      cout<<"/"<<v[i]<<" "<<count1<<endl;
      }
      else
      {
//      cout<<"/"<<v[i]<<" "<<count1<<endl;
        j++;
        i++;
      }
    }
    else if(sum+v[i]<=t)
    {
      sum+=v[i];
      count1++;

//      cout<<"//"<<v[i]<<" "<<count1<<endl;
      i++;
    }
    else i++;
  }
  max1=max(max1,count1);
  cout<<max1<<endl;
  return 0;
}
