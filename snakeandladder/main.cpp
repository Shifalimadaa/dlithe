#include <iostream>

using namespace std;
int randd(int ra)
{
    ra=(rand()%10)+1;
    if(ra>6)
    {
        ra=ra-3;

    }
    return ra;
}
void game()
{
    int p1=0,p2=0,P,r;
    while(1)
    {
        cout<<"Enter the player number "<<endl;
        cin>>P;
        int rn=randd(r);
        cout<<"The Random number generated is "<<rn<<endl;
        if(P==1)
        {
            p1=p1+r;

            if(p1==8)
            {
                p1=p1+14;
            }
            else if(p1==27)
            {
                p1=p1+26;
            }
            else if(p1==42)
            {
                p1=p1+26;
            }
            else if(p1==61)
            {
                p1=p1+30;
            }
            else if(p1==75)
            {
                p1=p1+20;
                  cout<<p1;
            }
            else if(p1==97)
            {
                p1=p1-0;
            }
             else if(p1==74)
            {
                p1=p1-34;
            }
             else if(p1==56)
            {
                p1=p1-30;
            }
             else if(p1==23)
            {
                p1=p1-16;
            }
             else if(p1==75)
            {
                p1=p1-20;
                cout<<p1;
            }
            else if(p1==100)
            {
                cout<<"PLAYER 1 IS THE WINNER"<<endl;
                break;
            }
            else if(p2>100)
            {
                p1=p1-r;
            }
        }
        else if(P==2)
        {
            p2=p2+r;
            if(p2==8)
            {
                p2=p2+14;
            }
            else if(p2==27)
            {
                p2=p2+26;
            }
            else if(p2==42)
            {
                p2=p2+26;
            }
            else if(p2==61)
            {
                p2=p2+30;
            }
            else if(p2==75)
            {
                p2=p2+20;
                cout<<p2;
            }
            else if(p2==97)
            {
                p2=p2-0;
            }
             else if(p2==74)
            {
                p2=p2-34;
            }
             else if(p2==56)
            {
                p2=p2-30;
            }
             else if(p2==23)
            {
                p2=p2-16;
            }
             else if(p2==75)
            {
                p2=p2-20;
                cout<<p2;
            }
            else if(p2==100)
            {
                cout<<"PLAYER 2 IS THE WINNER"<<endl;
                break;
            }
            else if(p2>100)
            {
                p2=p2-r;
            }

        }
        else{
            cout<<"The enetered player number is wrong"<<endl;
        }

    }


}

int main()
{
   game();
    return 0;
}
