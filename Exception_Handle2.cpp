#include <iostream>
using namespace std;

double divide (int a,int b)
{
    if(b==0)
    {
        throw "Divide By 0 Error";
    }
    
    return a/b;
}
 
 
 int main()
{
    try
    {
      cout<< divide(2,0);
    }
 
   catch(const char * Exc_msg)
   {
       cout<<"Exception:"<<Exc_msg<<endl;
   }
return 0;
}
