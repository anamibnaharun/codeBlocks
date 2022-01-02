#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    int* next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

int* make_linkedlist(int a[],int n)
{
    Node* head=NULL,temp;
    temp=new Node(a[0]);
    head=&temp;
    for (int i=0;i<n;i++)
    {
     temp
     if(i==0)
     {

     }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    head=make_linkdedlist(a);
    return 0;
}
