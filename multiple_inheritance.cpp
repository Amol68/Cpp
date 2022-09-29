#include <iostream>
using namespace std;

class A{
  
  public:
  A()
  {
      cout<<"A Constructor Called"<<endl;
  }
  
};
 
 class B{
  
  public: 
   B()
  {
      cout<<"B Constructor Called"<<endl;
  }
  
 };
 
 class C : public B , public A
 {
  
  public: 
 C()
  {
      cout<<"C Constructor Called"<<endl;
  }
    
};

int main()
{
    C c;
  

    return 0;
}
