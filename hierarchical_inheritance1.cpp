#include <iostream>
using namespace std;

class father
{
    public:
  string show_father_name()
  {
      return "Messi";
  }
};

class child1 : public father
{
    public: 
    string show_child1_name()
    {
        return "Thiago"; 
    }
};

class child2 : public father
{
    public:
    string show_child2_name()
    {
          return "Ciro";
    }
};

int main()
{
    child1 a;
    cout<<"Child 1:"<<a.show_child1_name()<<endl;
    cout<<"Father:"<<a.show_father_name()<<endl<<endl;
    
    child2 b;
     cout<<"Child 2:"<<b.show_child2_name()<<endl;
    cout<<"Father:"<<b.show_father_name()<<endl<<endl;
    }
