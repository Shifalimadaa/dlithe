#include <iostream>

using namespace std;
void swapn(int a,int b)
{
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout << "numbers after swappin "<<a<<" "<<b<< endl;

}
int main()
{
    int x,y;
    cout<<"Enter the two numbers"<<endl;
    cin>>x>>y;
    swapn(x,y);
    return 0;
}
