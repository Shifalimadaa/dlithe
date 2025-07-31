#include <iostream>
using namespace std;
void lar(int a,int b)
{
     if(a>b)
     cout<<a<<" is largest";
     else
     cout<<b<<" is largest";
}
int main()
{
    int x,y;
    cout<<"Enter the two numbers"<<endl;
    cin>>x>>y;
    lar(x,y);
    return 0;
}
