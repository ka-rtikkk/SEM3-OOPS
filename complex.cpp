#include   <iostream>
using namespace std;
class complex 
{
    int imag,real;
    public:
    complex()
    {
        imag=0;
        real=0;

    }
    complex(int r, int i)
    {
        real =r;
        imag=i;

    }
    void display()
    {
        cout<<"real"<<real<<"imag"<<imag<<endl;
    }
    void sum(complex c, complex d)
    {
        real=c.real+d.real;
        imag=c.imag+d.imag;
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex c1(2,3),c2(4,5),c3;
    c3.sum(c1,c2);
    return 0;
}