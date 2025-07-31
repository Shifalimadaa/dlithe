#include <iostream>

using namespace std;
int sarea(int h,int w)
{
     return h*w;

}
int main()
{
    int l,wi,area;
    cout<<"Enter the length and width of the rectanle "<<endl;
    cin>>l>>wi;
    area=sarea(l,wi);
    cout << "Area of the reactanle"<<area<< endl;
    return 0;
}
