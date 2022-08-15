#include <iostream>
using namespace std;

class Complex
{
    int a,b;

    public:
    void getdata(int n1, int n2)
    {
     a=n1;
     b=n2;
    }

    void printdata()
    {
        cout<<"Number: "<<a<<"+"<<b<<"i"<<endl;
    
    }
    
    friend Complex Complexsum(Complex o1,Complex o2);
};

Complex Complexsum(Complex o1, Complex o2)
{
    Complex o3;
    
    o3.getdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex C1 ,C2,sum;
    
    C1.getdata(2,3);
    C1.printdata();
    
    C2.getdata(1,3);
    C2.printdata();
    
    sum=Complexsum(C1,C2);
    sum.printdata();
    return 0;
    
    
}
