#include <iostream>
using namespace std;

class printer
{
  string name;
  int available_paper;
  
  public:
  printer(string n , int a)
  {
      name=n;
      available_paper=a;
  }
  
  void print(string txt_doc)
  {
      int required_paper=txt_doc.length()/10;
     
     if(required_paper>available_paper)
      throw "Error 101";
      
      cout<<"Printing.."<<txt_doc<<endl;
      
      available_paper -= required_paper;
     
       
  }
    
};

int main()
{
    printer p1("HP DeskJet",12);
    
    try
    {
    p1.print("My Name Is Jeremy.I Am 19 Years Of Age!!");
     p1.print("My Name Is Jeremy.I Am 19 Years Of Age!!");
    p1.print("My Name Is Jeremy.I Am 19 Years Of Age!!");
     p1.print("My Name Is Jeremy.I Am 19 Years Of Age!!");
   
   
    }

    catch(const char * txt_exception)
    {
        cout<<"Exception:"<<txt_exception<<endl;
    }
catch(...)
    {
        cout<<"Fucked Up Context :)";
    }
      
    
    
return 0;
}
