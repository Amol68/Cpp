#include <iostream>
using namespace std;

class area
{
    public:
 void calc(int); //square
 void calc(int,int); //rect 
 void calc(float); //circle
};

void area :: calc(int a)
{
 cout<<" Area Of Square:"<<a*a;
}

void area :: calc(int a, int b)
{
    cout<<" Area Of Rectangle:"<<a*b;
}

void area :: calc(float a)
{
    cout<<" Area Of Circle:"<<3.14*a*a;
}


int main()
{
    int ch ,a,b;
    float r;
    area obj;
    
    cout<<"Function Overloading";
    cout<<"\n\n 1.Area Of Square \n 2.Area Of Rect \n 2.Area Of Circle";
    cout<<"\n\n Enter Your Choice From 1-3: ";
    cin>>ch;
    
    switch(ch)
    {
        case 1:
        cout<<"\n Enter Side Of Square: ";
        cin>>a;
        obj.calc(a);
        break;
        
        case 2:
        cout<<"\n Enter Length & Breadth Of Rectangle: ";
        cin>>a>>b;
        obj.calc(a,b);
        break;
        
        case 3:
        cout<<"\n Enter Radius Of Circle: ";
        cin>>r;
        obj.calc(r);
        break;
    }
    return 0;
}
