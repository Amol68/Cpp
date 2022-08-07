#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream myfile;
    
    myfile.open("Amol.txt",ios::out);
    
    if(myfile.is_open())
    {
        myfile << "Hello\n";
        myfile << "My Name Is Amol\n";
        myfile.close();
    }
     
    myfile.open("Amol.txt",ios::app);
    
    if(myfile.is_open())
    {
        myfile << "Hello 2\n";
        myfile << "My Name Is Om";
        myfile.close();
    }
   
    return 0;
}