#include<bits/stdc++.h>
using namespace std;
int median(vector<int>& arrayn,vector<int>& arrym)
{

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arrayn,arraym;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arrayn.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        arrayn.push_back(x);
    }
    median(arrayn,arraym);
}
