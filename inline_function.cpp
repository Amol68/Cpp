#include <iostream>
using namespace std;

inline int product(int a, int b)
{
   static int c=0;
    c=c+1;
    return a*b+c;
}

int main()
{
    
    int a,b;
    cout<<"Enter Two Values:";
    cin>>a>>b;
    
    cout<<"Product IS:"<<product(a,b)<<endl;
    cout<<"Product IS:"<<product(a,b)<<endl;
    cout<<"Product IS:"<<product(a,b)<<endl;
    cout<<"Product IS:"<<product(a,b)<<endl;
    cout<<"Product IS:"<<product(a,b)<<endl;
    cout<<"Product IS:"<<product(a,b)<<endl;
    
    
    return 0;
}
