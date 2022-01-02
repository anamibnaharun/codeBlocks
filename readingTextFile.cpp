#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ifstream file;
    file.open("../text");
    int x,sum=0;
    while(file>>x)
    {
        sum+=x;
    }
    file.close();
    cout<<sum;
    return 0;
}
