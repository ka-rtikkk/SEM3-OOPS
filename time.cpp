#include <iostream>
using namespace std;

class time
{
    int hrs,mins;
    public:
    time()
    {
        hrs=0;
        mins=0;

    }
    time(int a,int b)
    {
        hrs=a;
        mins=b;

    }
    time(time &t)
    {
        hrs=t.hrs;
        mins=t.mins;
    }
    void sum (time t1,time t2)
    {
        mins=t1.mins+t2.mins;
    hrs = t1.hrs + t2.hrs;
    if(mins>=60)
    {
        hrs++;
        mins=mins-60;
    }
    cout<<"Hrs: "<<hrs<<" Mins: "<<mins<<endl;
}
    void display()
    {
        cout<<"Hrs: "<<hrs<<" Mins: "<<mins<<endl;

    }
};
int main()
{
    time t1(2,45),t2(3,30),t3;
    t3.sum(t1,t2);
    return 0;
}