#include <iostream>

using namespace std;
void evenodd(int x)
{
     if((x&1)==0)
     cout<<x<<" is an even number";
     else
     cout<<x<<" is an odd number";

}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    evenodd(n);
    return 0;
}
