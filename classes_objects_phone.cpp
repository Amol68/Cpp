#include<iostream>
using namespace std;

class phone
{
   string brand;
   string model;
   string  ram;
   string storage;
   string processor;
   int  display;
   
   	public: 
	void getdata(string brand, string model, string ram, string storage,  string processor, int display)
	{
	 this ->brand = brand;
	this ->	model = model;
	this ->	ram = ram;
	this ->	storage = storage;
	this ->	processor = processor;
	this ->	display = display;

	}
	
	void showdata()
	{
		cout<<"Brand Name: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"RAM: "<<ram<<endl;
		cout<<"Storage: "<<storage<<endl;
		cout<<"Processor: "<<processor<<endl;
		cout<<"Display "<<display<<endl<<endl; 
		
        cout<<this;
	}
	
};


int main()
{
	phone redmi , oppo;
	redmi.getdata("Redmi", "Note5", "4GB", "128GB", "Qualcomm", 7 );
	redmi.showdata();
	
	oppo.getdata("Oppo", "Nord", "16GB", "286GB", "Qualcomm", 6 );
	oppo.showdata();
	
	return 0;
}
