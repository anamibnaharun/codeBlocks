#include<bits/stdc++.h>
using namespace std;

int counti(vector<int>& nums,int low,int high,int val)
{
    int countOfVal=0;
    for(int i=low;i<=high;i++)
    {
        if(nums[i]==val)countOfVal++;
    }
    return countOfVal;
}


int rec(int low,int high,vector<int>& nums)
{
    if(low==high)
    {
        return nums[low];
    }
    int mid=(low+high)/2;
    int leftMajor=rec(low,mid,nums);
    int rightMajor=rec(mid+1,high,nums);
    if(leftMajor==rightMajor)
    {
        return leftMajor;
    }
    else{
        return counti(nums,low,high,leftMajor)>counti(nums,low,high,rightMajor)?leftMajor:rightMajor;
    }
}

int majorityElementRec(vector<int>& nums)
{
    cout<<rec(0,nums.size()-1,nums);
    return 0;
}

int majorityElementBitManipulation(vector<int>& nums)
{
    int mask=1,majority=0;
    for(int bitNo=0;bitNo<32;bitNo++,mask<<=1)
    {
        int counti=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&mask)counti++;
        }
        if(counti*2>nums.size())majority|=mask;
    }
    return majority;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<majorityElementBitManipulation(nums);
    return 0;
}
